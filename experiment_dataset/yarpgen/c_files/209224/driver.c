#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-13943;
long long int var_8 = 6953496635368446108LL;
unsigned int var_12 = 4045950683U;
int var_13 = 1293826097;
int zero = 0;
short var_14 = (short)-32647;
long long int var_15 = -5203299832663026739LL;
unsigned int var_16 = 2695070088U;
short var_17 = (short)27749;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
