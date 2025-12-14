#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1575323530;
unsigned long long int var_3 = 11388776819126119559ULL;
signed char var_5 = (signed char)-76;
unsigned long long int var_6 = 16140480917143571594ULL;
unsigned long long int var_7 = 14435272060123675500ULL;
unsigned short var_8 = (unsigned short)48989;
unsigned char var_9 = (unsigned char)17;
signed char var_10 = (signed char)19;
unsigned char var_12 = (unsigned char)11;
unsigned short var_13 = (unsigned short)2183;
int var_14 = 665438429;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned long long int var_16 = 7068790809402072712ULL;
long long int var_17 = 4779510438798466583LL;
signed char var_18 = (signed char)-77;
short var_19 = (short)-5424;
signed char var_20 = (signed char)-21;
long long int var_21 = 6649005636068959419LL;
_Bool var_22 = (_Bool)0;
unsigned int var_23 = 2389814345U;
short var_24 = (short)-28638;
unsigned long long int var_25 = 1439478336331137821ULL;
long long int var_26 = -3111608043921567071LL;
long long int var_27 = -1068637552280171379LL;
int arr_0 [12] [12] ;
unsigned long long int arr_1 [12] [12] ;
_Bool arr_3 [12] [12] [12] ;
int arr_6 [12] [12] ;
unsigned short arr_9 [22] ;
long long int arr_10 [22] [22] ;
signed char arr_13 [22] ;
unsigned char arr_14 [22] ;
unsigned short arr_8 [12] [12] [12] ;
unsigned char arr_11 [22] ;
unsigned short arr_12 [22] [22] ;
unsigned char arr_15 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = 383343889;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = 1157589652975206385ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = -1950704694;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = (unsigned short)9341;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_10 [i_0] [i_1] = 4537531796845908207LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_13 [i_0] = (signed char)-1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = (unsigned char)54;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned short)24644;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = (unsigned char)175;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned short)64089;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_15 [i_0] = (unsigned char)46;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
