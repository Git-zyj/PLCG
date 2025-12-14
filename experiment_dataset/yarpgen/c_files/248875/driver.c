#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-7263;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 2575250141U;
signed char var_10 = (signed char)-126;
unsigned short var_16 = (unsigned short)43896;
unsigned long long int var_17 = 7835334538688864449ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)230;
_Bool var_21 = (_Bool)0;
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
