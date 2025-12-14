#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -571960079;
short var_6 = (short)16997;
int var_8 = -14189766;
signed char var_10 = (signed char)63;
unsigned char var_11 = (unsigned char)173;
unsigned int var_12 = 4107262585U;
short var_18 = (short)-83;
int zero = 0;
short var_20 = (short)-29094;
short var_21 = (short)-23740;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
