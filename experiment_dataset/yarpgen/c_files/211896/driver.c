#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_2 = (short)5834;
_Bool var_8 = (_Bool)1;
unsigned short var_10 = (unsigned short)59316;
unsigned char var_13 = (unsigned char)207;
int zero = 0;
unsigned int var_18 = 1881063796U;
unsigned char var_19 = (unsigned char)29;
unsigned int var_20 = 1664092923U;
unsigned int var_21 = 3488129862U;
_Bool var_22 = (_Bool)0;
unsigned short var_23 = (unsigned short)63919;
_Bool var_24 = (_Bool)0;
long long int var_25 = -5048882735913362873LL;
_Bool var_26 = (_Bool)0;
long long int var_27 = -1462889749654278994LL;
_Bool var_28 = (_Bool)0;
_Bool var_29 = (_Bool)1;
unsigned long long int arr_0 [16] [16] ;
signed char arr_1 [16] ;
_Bool arr_2 [21] ;
_Bool arr_3 [21] ;
signed char arr_5 [15] ;
_Bool arr_7 [15] ;
_Bool arr_4 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = 115657353023298104ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (signed char)43;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (signed char)36;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_18);
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
