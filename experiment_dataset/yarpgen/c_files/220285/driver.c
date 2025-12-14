#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 497405741U;
long long int var_4 = -4918841591004786421LL;
unsigned int var_6 = 1586034069U;
unsigned int var_8 = 143849187U;
signed char var_9 = (signed char)30;
long long int var_11 = -2319065090138315255LL;
unsigned long long int var_12 = 4007565338990051233ULL;
unsigned char var_16 = (unsigned char)11;
int zero = 0;
long long int var_18 = 8222112098615792185LL;
unsigned char var_19 = (unsigned char)188;
unsigned int var_20 = 1668963873U;
signed char var_21 = (signed char)27;
unsigned char var_22 = (unsigned char)240;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
