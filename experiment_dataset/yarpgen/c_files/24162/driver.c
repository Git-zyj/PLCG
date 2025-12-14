#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 2158140572328635965ULL;
int var_5 = 1836386771;
short var_10 = (short)2695;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned int var_17 = 1000925441U;
short var_18 = (short)-6073;
void init() {
}

void checksum() {
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
