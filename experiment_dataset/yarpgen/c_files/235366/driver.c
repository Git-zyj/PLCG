#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4108980610121048023LL;
unsigned long long int var_3 = 5988962503158385912ULL;
short var_4 = (short)17198;
int var_5 = 1899534058;
unsigned int var_6 = 2775990139U;
unsigned short var_7 = (unsigned short)21282;
int var_10 = 1680204607;
unsigned char var_12 = (unsigned char)215;
int var_13 = -1855110680;
long long int var_14 = 5328239454156986394LL;
int zero = 0;
long long int var_16 = 5249839273793309997LL;
_Bool var_17 = (_Bool)1;
short var_18 = (short)8849;
long long int var_19 = 1626423521578022214LL;
unsigned short var_20 = (unsigned short)1001;
unsigned short var_21 = (unsigned short)24392;
unsigned short var_22 = (unsigned short)10875;
long long int arr_0 [10] [10] ;
unsigned short arr_1 [10] ;
short arr_3 [16] ;
signed char arr_4 [16] [16] ;
unsigned short arr_5 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = -6274234253429584763LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned short)13279;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (short)-5910;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-44;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (unsigned short)44250;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
