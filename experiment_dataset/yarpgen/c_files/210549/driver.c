#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1931058201;
long long int var_6 = -6440205808381455090LL;
int var_12 = -172445636;
int zero = 0;
short var_13 = (short)17891;
int var_14 = -2026855490;
long long int var_15 = 8039668701916093690LL;
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
