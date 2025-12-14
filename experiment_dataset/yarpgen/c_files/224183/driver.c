#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1582665495;
int var_1 = 1019658282;
int var_3 = -331123914;
int var_7 = -1059223877;
int var_9 = -1446573259;
unsigned int var_10 = 425845230U;
unsigned short var_12 = (unsigned short)8414;
int zero = 0;
unsigned int var_13 = 33562065U;
int var_14 = 450147967;
unsigned short var_15 = (unsigned short)37805;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
