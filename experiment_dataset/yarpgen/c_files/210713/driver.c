#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1502515343;
int var_2 = -1439453701;
int var_5 = -1629622904;
int var_6 = -754580640;
int var_11 = -358695138;
int var_12 = -491239325;
int var_13 = -854653591;
int zero = 0;
int var_19 = 1514252569;
int var_20 = 1307849181;
int var_21 = -1065291356;
int var_22 = 1485430708;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
