#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_4 = (unsigned char)48;
unsigned int var_6 = 2308432732U;
unsigned long long int var_7 = 11073171051604767448ULL;
_Bool var_11 = (_Bool)0;
_Bool var_13 = (_Bool)1;
long long int var_15 = 5365337904113913114LL;
short var_16 = (short)13919;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)160;
int zero = 0;
unsigned char var_19 = (unsigned char)16;
short var_20 = (short)-9909;
_Bool var_21 = (_Bool)1;
short var_22 = (short)-32126;
_Bool var_23 = (_Bool)0;
_Bool var_24 = (_Bool)0;
unsigned char var_25 = (unsigned char)84;
unsigned short var_26 = (unsigned short)13379;
unsigned long long int var_27 = 17998080178244121584ULL;
unsigned short var_28 = (unsigned short)42354;
unsigned short var_29 = (unsigned short)4215;
unsigned char var_30 = (unsigned char)76;
int arr_9 [16] [16] ;
short arr_10 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_9 [i_0] [i_1] = 201702222;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = (short)5922;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
