#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_5 = 1228589896U;
unsigned long long int var_15 = 2433592607250852813ULL;
int zero = 0;
unsigned long long int var_16 = 5180761549847782091ULL;
unsigned long long int var_17 = 4776871964054374596ULL;
short var_18 = (short)-19720;
void init() {
}

void checksum() {
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
