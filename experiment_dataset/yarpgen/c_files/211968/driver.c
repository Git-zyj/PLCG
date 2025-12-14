#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_2 = -2122364338;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)170;
int var_5 = 1964189525;
_Bool var_7 = (_Bool)1;
short var_8 = (short)-3745;
unsigned int var_10 = 600012582U;
unsigned char var_12 = (unsigned char)0;
_Bool var_14 = (_Bool)1;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)158;
void init() {
}

void checksum() {
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
