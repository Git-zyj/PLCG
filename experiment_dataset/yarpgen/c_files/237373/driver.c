#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)25375;
_Bool var_1 = (_Bool)0;
unsigned int var_2 = 2758893061U;
signed char var_3 = (signed char)24;
int var_6 = 2082602426;
unsigned short var_7 = (unsigned short)50533;
unsigned char var_9 = (unsigned char)111;
short var_10 = (short)24956;
_Bool var_11 = (_Bool)0;
int var_12 = -1196865423;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned char var_14 = (unsigned char)100;
unsigned long long int var_15 = 7191435840425591053ULL;
unsigned long long int var_16 = 13839582597260819243ULL;
int var_17 = -1286786795;
unsigned char var_18 = (unsigned char)235;
signed char var_19 = (signed char)116;
_Bool var_20 = (_Bool)0;
int var_21 = 2018162012;
unsigned short arr_0 [12] ;
int arr_1 [12] ;
_Bool arr_6 [12] [12] ;
unsigned short arr_7 [12] [12] [12] ;
_Bool arr_8 [12] ;
signed char arr_9 [12] [12] ;
int arr_15 [12] [12] [12] ;
_Bool arr_18 [12] [12] [12] [12] ;
unsigned char arr_19 [12] ;
unsigned int arr_20 [12] [12] [12] [12] ;
signed char arr_24 [12] ;
int arr_29 [20] ;
_Bool arr_2 [12] [12] ;
int arr_3 [12] ;
unsigned long long int arr_4 [12] ;
short arr_5 [12] ;
unsigned long long int arr_10 [12] [12] [12] ;
int arr_11 [12] [12] [12] ;
unsigned short arr_12 [12] [12] [12] ;
unsigned char arr_17 [12] [12] ;
unsigned short arr_22 [12] [12] [12] ;
int arr_23 [12] ;
unsigned char arr_26 [12] ;
unsigned char arr_31 [20] ;
int arr_32 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (unsigned short)60602;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = -504914875;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned short)4479;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)11;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = -515428867;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_19 [i_0] = (unsigned char)99;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = 3932634251U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_24 [i_0] = (signed char)-126;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_29 [i_0] = -1103196218;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = -41344775;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = 11632872538845947036ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (short)-7780;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 10074513057652207512ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 1108920410;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (unsigned short)29469;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_17 [i_0] [i_1] = (unsigned char)245;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (unsigned short)46137;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_23 [i_0] = 982564229;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_26 [i_0] = (i_0 % 2 == 0) ? (unsigned char)217 : (unsigned char)20;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_31 [i_0] = (i_0 % 2 == 0) ? (unsigned char)254 : (unsigned char)81;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_32 [i_0] = (i_0 % 2 == 0) ? 392645034 : 672099184;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_22 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_31 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_32 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
