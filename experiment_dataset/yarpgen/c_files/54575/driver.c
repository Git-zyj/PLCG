#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1063480547;
signed char var_5 = (signed char)-123;
signed char var_6 = (signed char)84;
short var_7 = (short)22194;
short var_8 = (short)14028;
unsigned int var_9 = 3784211702U;
int var_11 = -1001314743;
short var_12 = (short)-7594;
int zero = 0;
short var_13 = (short)24929;
short var_14 = (short)-29542;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)13247;
unsigned int var_17 = 4128310515U;
short var_18 = (short)-29157;
_Bool var_19 = (_Bool)1;
int var_20 = 1640971648;
unsigned long long int var_21 = 2826168587520076802ULL;
unsigned short var_22 = (unsigned short)14884;
long long int var_23 = -8949096597102727972LL;
short var_24 = (short)-15251;
unsigned char var_25 = (unsigned char)64;
long long int var_26 = 6712775629173385023LL;
short var_27 = (short)-25963;
int var_28 = -1245415115;
short var_29 = (short)17732;
signed char var_30 = (signed char)49;
int arr_1 [16] [16] ;
signed char arr_3 [16] [16] ;
unsigned short arr_8 [16] [16] [16] ;
_Bool arr_12 [16] [16] [16] [16] ;
_Bool arr_20 [16] [16] ;
unsigned char arr_23 [16] [16] ;
_Bool arr_4 [16] [16] ;
unsigned short arr_19 [16] [16] ;
short arr_24 [16] ;
long long int arr_28 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = 1799495747;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-63;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned short)43727;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_20 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_23 [i_0] [i_1] = (unsigned char)45;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_19 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)12081 : (unsigned short)34131;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_24 [i_0] = (short)10617;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_28 [i_0] = 8726203119762589131LL;
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
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_28 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
