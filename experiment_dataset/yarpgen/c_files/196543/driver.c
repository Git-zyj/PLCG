#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)59951;
unsigned short var_2 = (unsigned short)22864;
unsigned char var_4 = (unsigned char)87;
long long int var_7 = 4564501465440459513LL;
unsigned short var_8 = (unsigned short)40529;
short var_9 = (short)6689;
_Bool var_10 = (_Bool)0;
int var_11 = -758344186;
unsigned short var_12 = (unsigned short)12233;
int var_14 = -542367056;
int zero = 0;
int var_15 = 375748727;
short var_16 = (short)14990;
signed char var_17 = (signed char)-99;
unsigned int var_18 = 1199535769U;
unsigned int var_19 = 830665593U;
short var_20 = (short)19252;
unsigned short var_21 = (unsigned short)46471;
long long int var_22 = -9162881702657701912LL;
short arr_0 [13] [13] ;
unsigned short arr_1 [13] ;
int arr_2 [13] ;
unsigned short arr_10 [13] ;
unsigned short arr_3 [13] [13] ;
int arr_6 [13] ;
unsigned int arr_7 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (short)15272;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned short)36232;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = -1480865056;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (unsigned short)18125 : (unsigned short)30553;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)46541;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = -1598369468;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = 786427134U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
