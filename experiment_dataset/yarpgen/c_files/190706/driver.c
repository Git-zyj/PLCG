#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)190;
signed char var_1 = (signed char)112;
unsigned char var_7 = (unsigned char)232;
unsigned char var_10 = (unsigned char)252;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)229;
int zero = 0;
unsigned char var_13 = (unsigned char)206;
unsigned int var_14 = 2899231211U;
short var_15 = (short)-3199;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
