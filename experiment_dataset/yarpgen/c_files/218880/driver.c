#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = 1552377843;
long long int var_5 = 510640492193624723LL;
unsigned long long int var_6 = 2440686452994464600ULL;
unsigned char var_12 = (unsigned char)30;
int zero = 0;
unsigned int var_16 = 95661644U;
short var_17 = (short)2148;
void init() {
}

void checksum() {
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
