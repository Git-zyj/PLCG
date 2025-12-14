#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26789;
long long int var_2 = 2501525573532082839LL;
unsigned long long int var_4 = 16915692727205849922ULL;
long long int var_5 = -6049992411712833864LL;
unsigned int var_8 = 3146624977U;
unsigned long long int var_11 = 8018236373028812899ULL;
unsigned int var_12 = 653151391U;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned long long int var_16 = 15515498413011803111ULL;
unsigned long long int var_17 = 12324931010243195522ULL;
unsigned int var_18 = 2712953145U;
unsigned short var_19 = (unsigned short)41838;
unsigned short var_20 = (unsigned short)12727;
unsigned short var_21 = (unsigned short)34735;
unsigned short var_22 = (unsigned short)29471;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
