#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-32128;
signed char var_8 = (signed char)69;
unsigned short var_10 = (unsigned short)65197;
long long int var_13 = -6509973160749454028LL;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned short var_20 = (unsigned short)17452;
short var_21 = (short)23723;
unsigned int var_22 = 400942443U;
long long int var_23 = 8005622198942601712LL;
long long int var_24 = 832446824507262275LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
