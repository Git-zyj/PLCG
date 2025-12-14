#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 9363994159163673473ULL;
signed char var_6 = (signed char)-122;
_Bool var_7 = (_Bool)1;
int var_11 = -1528094156;
short var_12 = (short)-31272;
signed char var_13 = (signed char)-3;
unsigned short var_14 = (unsigned short)54134;
int var_16 = 1083263795;
unsigned short var_17 = (unsigned short)15140;
unsigned short var_18 = (unsigned short)27180;
unsigned long long int var_19 = 4131869850079274401ULL;
int zero = 0;
long long int var_20 = -5239063533929756906LL;
unsigned long long int var_21 = 1969817133678603377ULL;
unsigned short var_22 = (unsigned short)54217;
unsigned short var_23 = (unsigned short)44515;
short var_24 = (short)28310;
unsigned short var_25 = (unsigned short)35118;
signed char var_26 = (signed char)96;
unsigned long long int var_27 = 17474954546999925652ULL;
signed char var_28 = (signed char)28;
unsigned long long int var_29 = 10319273970526882451ULL;
_Bool var_30 = (_Bool)1;
signed char arr_0 [11] [11] ;
signed char arr_1 [11] [11] ;
unsigned short arr_4 [11] [11] [11] ;
unsigned int arr_15 [11] [11] [11] [11] [11] ;
unsigned long long int arr_17 [15] [15] ;
unsigned long long int arr_20 [16] ;
unsigned int arr_21 [16] ;
signed char arr_2 [11] ;
unsigned int arr_3 [11] ;
_Bool arr_10 [11] [11] ;
short arr_19 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-92;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)20;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)63986;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = 1966244302U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_17 [i_0] [i_1] = (i_0 % 2 == 0) ? 15285229380563612410ULL : 13755709324698928656ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_20 [i_0] = 12399323089652307484ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_21 [i_0] = 2204118704U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (signed char)66;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 4267033516U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_10 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_19 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)9218 : (short)19489;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
