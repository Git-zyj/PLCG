#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)4045;
long long int var_6 = -263203912433189688LL;
int zero = 0;
unsigned long long int var_20 = 17650234461586058976ULL;
int var_21 = -283052996;
int var_22 = 777427301;
_Bool var_23 = (_Bool)0;
unsigned char var_24 = (unsigned char)205;
short var_25 = (short)3014;
signed char var_26 = (signed char)-29;
unsigned char var_27 = (unsigned char)167;
int var_28 = -1510205376;
_Bool var_29 = (_Bool)0;
int var_30 = 576602555;
unsigned long long int var_31 = 979668960225634627ULL;
short var_32 = (short)-7953;
unsigned int var_33 = 1980834209U;
short var_34 = (short)12550;
unsigned long long int var_35 = 15923442789921387075ULL;
int var_36 = 2071623410;
short arr_0 [23] [23] ;
signed char arr_1 [23] ;
unsigned short arr_3 [23] ;
unsigned long long int arr_5 [20] ;
unsigned char arr_6 [20] ;
unsigned long long int arr_9 [20] [20] ;
unsigned long long int arr_10 [20] [20] ;
unsigned int arr_11 [20] [20] ;
unsigned int arr_13 [20] [20] [20] ;
short arr_18 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (short)2911;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (signed char)-69;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (unsigned short)51819;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = 11397566186765163426ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (unsigned char)189;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_9 [i_0] [i_1] = 1477718092112869456ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_10 [i_0] [i_1] = 15473917491172242622ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_11 [i_0] [i_1] = 1329992706U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 1383569029U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_18 [i_0] = (short)20738;
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
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
