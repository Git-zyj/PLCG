#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -493935688;
int var_6 = -580563984;
int var_7 = -2915586;
int var_11 = -1041710360;
int zero = 0;
int var_13 = 1005133193;
int var_14 = -726219378;
int var_15 = -1614363244;
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
