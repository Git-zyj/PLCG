#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)80;
unsigned char var_2 = (unsigned char)160;
signed char var_3 = (signed char)30;
unsigned short var_4 = (unsigned short)60285;
_Bool var_6 = (_Bool)0;
int var_7 = 439269779;
unsigned short var_9 = (unsigned short)31367;
int var_10 = -1478400647;
short var_11 = (short)14089;
unsigned int var_12 = 1729361776U;
unsigned char var_15 = (unsigned char)14;
unsigned int var_16 = 2245610179U;
int zero = 0;
unsigned char var_18 = (unsigned char)84;
short var_19 = (short)-16603;
unsigned short var_20 = (unsigned short)62658;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)17020;
_Bool var_23 = (_Bool)1;
unsigned short var_24 = (unsigned short)35817;
unsigned int var_25 = 576421495U;
unsigned short var_26 = (unsigned short)7290;
long long int var_27 = -4546081921785181296LL;
unsigned char arr_0 [16] [16] ;
unsigned int arr_1 [16] ;
long long int arr_3 [23] [23] ;
signed char arr_4 [23] ;
unsigned char arr_5 [23] ;
unsigned char arr_7 [25] [25] ;
short arr_8 [25] ;
unsigned int arr_13 [25] ;
short arr_14 [25] ;
unsigned int arr_15 [25] [25] [25] ;
unsigned long long int arr_16 [25] [25] [25] [25] [25] ;
unsigned int arr_2 [16] ;
unsigned int arr_6 [23] ;
unsigned long long int arr_9 [25] ;
unsigned int arr_20 [25] [25] ;
unsigned int arr_21 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)248;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 1111564472U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = 8408509392997924626LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (signed char)-122;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (unsigned char)174;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)253;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (short)-17522;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_13 [i_0] = 2030112503U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_14 [i_0] = (short)-25790;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 3612316268U : 166195424U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = 15793709301260966293ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 3360875705U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 793427252U : 90501258U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 3673838090734105546ULL : 1638491776999815149ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_20 [i_0] [i_1] = (i_0 % 2 == 0) ? 2799063259U : 1457499972U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? 379025482U : 2877187001U;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
