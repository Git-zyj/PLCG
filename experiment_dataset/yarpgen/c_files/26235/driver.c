#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_2 = 4737595736767399240LL;
unsigned short var_3 = (unsigned short)62011;
unsigned char var_5 = (unsigned char)243;
unsigned char var_6 = (unsigned char)164;
signed char var_7 = (signed char)-42;
unsigned char var_8 = (unsigned char)14;
unsigned char var_9 = (unsigned char)81;
int zero = 0;
signed char var_13 = (signed char)-64;
_Bool var_14 = (_Bool)0;
int var_15 = 309307340;
unsigned char var_16 = (unsigned char)198;
long long int var_17 = 6860009694213405018LL;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)46;
short var_20 = (short)7668;
unsigned int var_21 = 2863046317U;
unsigned char arr_0 [12] ;
_Bool arr_1 [12] [12] ;
signed char arr_2 [12] [12] ;
signed char arr_5 [12] [12] [12] ;
unsigned char arr_13 [17] ;
unsigned short arr_15 [17] ;
unsigned char arr_16 [17] [17] ;
unsigned short arr_12 [12] ;
_Bool arr_18 [17] [17] [17] ;
unsigned long long int arr_19 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)132 : (unsigned char)20;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-35 : (signed char)2;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)-42 : (signed char)-59;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_13 [i_0] = (unsigned char)209;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_15 [i_0] = (unsigned short)48079;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_16 [i_0] [i_1] = (unsigned char)252;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (unsigned short)36020 : (unsigned short)55911;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_19 [i_0] = 9854152374384596999ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_18 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
