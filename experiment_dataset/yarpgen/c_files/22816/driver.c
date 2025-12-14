#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3583561442U;
unsigned char var_6 = (unsigned char)253;
_Bool var_7 = (_Bool)0;
int var_10 = -1869694759;
int zero = 0;
unsigned long long int var_16 = 8500375994257389316ULL;
int var_17 = 1898170139;
unsigned char var_18 = (unsigned char)218;
signed char var_19 = (signed char)22;
long long int var_20 = 3357364779712091677LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
