#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)120;
_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)36700;
signed char var_3 = (signed char)-46;
unsigned int var_4 = 3892066214U;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)2657;
int var_7 = 1582770367;
int var_10 = 971812701;
long long int var_11 = -5645371242675125248LL;
unsigned short var_12 = (unsigned short)63098;
unsigned int var_14 = 2526544741U;
signed char var_15 = (signed char)72;
signed char var_16 = (signed char)126;
long long int var_17 = -9129530977703558917LL;
int zero = 0;
long long int var_19 = 5162187409216876174LL;
short var_20 = (short)-1703;
long long int var_21 = -2890205973800015757LL;
signed char var_22 = (signed char)-94;
short var_23 = (short)-4846;
signed char var_24 = (signed char)-21;
unsigned char var_25 = (unsigned char)94;
unsigned int var_26 = 2242411647U;
unsigned short var_27 = (unsigned short)52095;
int var_28 = 655293057;
unsigned short var_29 = (unsigned short)11513;
unsigned char var_30 = (unsigned char)33;
unsigned int arr_0 [17] [17] ;
int arr_1 [17] [17] ;
int arr_5 [17] [17] [17] ;
long long int arr_6 [17] ;
signed char arr_7 [17] [17] ;
unsigned short arr_10 [17] ;
int arr_11 [17] [17] ;
signed char arr_12 [17] ;
int arr_14 [17] ;
long long int arr_15 [17] ;
_Bool arr_2 [17] ;
_Bool arr_3 [17] ;
unsigned char arr_9 [17] [17] ;
unsigned short arr_13 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = 1776847035U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = 501615928;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 1733327975;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = -1007644306228562278LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)-84;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = (unsigned short)57635;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? -1099065817 : 1896005923;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_12 [i_0] = (signed char)85;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_14 [i_0] = 966993844;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_15 [i_0] = 3754015568569049191LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)111;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (unsigned short)32650 : (unsigned short)63585;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
