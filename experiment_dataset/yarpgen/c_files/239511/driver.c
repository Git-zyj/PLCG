#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)1008;
unsigned long long int var_1 = 1664960271226137861ULL;
int var_3 = -1733012621;
signed char var_4 = (signed char)92;
int var_5 = 1385078795;
unsigned char var_6 = (unsigned char)207;
int var_8 = 1577963693;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 7067995320810203223ULL;
unsigned char var_12 = (unsigned char)91;
_Bool var_13 = (_Bool)1;
short var_14 = (short)-27060;
int zero = 0;
short var_15 = (short)-12325;
unsigned long long int var_16 = 10614964584774130926ULL;
long long int var_17 = -5212585775628359192LL;
_Bool var_18 = (_Bool)1;
short var_19 = (short)9257;
unsigned char var_20 = (unsigned char)21;
unsigned char var_21 = (unsigned char)84;
short var_22 = (short)-381;
short var_23 = (short)-31188;
long long int var_24 = -8962547875753484826LL;
signed char var_25 = (signed char)-31;
long long int var_26 = -3463812634420539660LL;
_Bool var_27 = (_Bool)1;
_Bool arr_0 [24] ;
unsigned int arr_1 [24] ;
long long int arr_2 [24] [24] ;
unsigned char arr_3 [24] [24] ;
unsigned short arr_5 [24] ;
unsigned short arr_6 [24] ;
short arr_7 [24] [24] ;
short arr_8 [24] [24] [24] [24] ;
unsigned char arr_9 [24] [24] [24] [24] ;
unsigned char arr_12 [24] [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 3748442212U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = 2780201508533373351LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)159;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (unsigned short)51028;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (unsigned short)28298;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-10616 : (short)24286;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (short)848 : (short)29;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (unsigned char)21;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned char)110 : (unsigned char)212;
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
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
