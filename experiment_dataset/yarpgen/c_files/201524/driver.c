#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_7 = (_Bool)1;
int var_10 = -941290544;
unsigned short var_12 = (unsigned short)6594;
unsigned short var_14 = (unsigned short)43258;
short var_15 = (short)2546;
unsigned short var_16 = (unsigned short)60862;
int zero = 0;
unsigned int var_18 = 1292255985U;
unsigned char var_19 = (unsigned char)254;
signed char var_20 = (signed char)112;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
