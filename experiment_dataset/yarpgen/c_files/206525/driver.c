#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)16621;
short var_2 = (short)29654;
signed char var_3 = (signed char)16;
unsigned int var_4 = 1678966894U;
short var_5 = (short)27767;
long long int var_6 = 7110348294030462164LL;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)-28;
unsigned short var_12 = (unsigned short)26846;
int zero = 0;
long long int var_13 = -6775170982593612685LL;
unsigned long long int var_14 = 5275038257064047811ULL;
short var_15 = (short)28486;
long long int var_16 = -2360673554756933336LL;
unsigned char var_17 = (unsigned char)17;
unsigned long long int var_18 = 12842135910313025975ULL;
_Bool var_19 = (_Bool)1;
unsigned int arr_0 [13] [13] ;
long long int arr_1 [13] [13] ;
unsigned short arr_2 [13] ;
_Bool arr_7 [15] [15] ;
unsigned char arr_3 [13] ;
short arr_8 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = 1641488993U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = 8018313873934313187LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (unsigned short)23534;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)200 : (unsigned char)149;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (short)23310;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
