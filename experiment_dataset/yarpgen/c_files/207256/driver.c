#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2516438947094430512LL;
long long int var_5 = -4341349837088675843LL;
long long int var_6 = 6581718556210822934LL;
long long int var_8 = 3731697072942013909LL;
long long int var_14 = 5762288771207351014LL;
long long int var_15 = -6340641155928448764LL;
int zero = 0;
long long int var_19 = -6707549516951417666LL;
long long int var_20 = -8554449844123325030LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
