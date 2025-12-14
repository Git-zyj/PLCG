#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)99;
unsigned int var_5 = 40597446U;
signed char var_8 = (signed char)100;
unsigned char var_9 = (unsigned char)87;
unsigned char var_11 = (unsigned char)58;
int zero = 0;
unsigned long long int var_13 = 4265860144759678403ULL;
unsigned long long int var_14 = 4013480228871237768ULL;
int var_15 = 1614365522;
short var_16 = (short)24965;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
