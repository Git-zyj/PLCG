#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
int var_11 = -807447916;
short var_13 = (short)-25063;
int zero = 0;
unsigned short var_16 = (unsigned short)56790;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 9570299146658741068ULL;
unsigned int var_19 = 2552426946U;
unsigned char var_20 = (unsigned char)110;
signed char arr_4 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (signed char)-100;
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
