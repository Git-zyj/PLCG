#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)0;
unsigned long long int var_3 = 17478918811362954868ULL;
unsigned long long int var_5 = 17722004474917443466ULL;
unsigned int var_6 = 2566783957U;
unsigned char var_7 = (unsigned char)111;
unsigned long long int var_10 = 4601987055856480757ULL;
unsigned int var_13 = 3488980420U;
long long int var_14 = -2651675290964914145LL;
int zero = 0;
unsigned short var_15 = (unsigned short)5161;
unsigned short var_16 = (unsigned short)47298;
unsigned short var_17 = (unsigned short)59754;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
