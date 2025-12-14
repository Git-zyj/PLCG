#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1302567904201801167ULL;
unsigned short var_7 = (unsigned short)45826;
signed char var_8 = (signed char)-70;
unsigned char var_9 = (unsigned char)86;
int var_11 = 86020842;
signed char var_14 = (signed char)92;
int zero = 0;
unsigned int var_15 = 3023103681U;
short var_16 = (short)-18845;
unsigned int var_17 = 3070939054U;
unsigned long long int var_18 = 16287274901197734428ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
