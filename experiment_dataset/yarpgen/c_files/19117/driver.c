#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-120;
int var_1 = -1946429283;
long long int var_2 = -2533354378265273388LL;
unsigned long long int var_3 = 7469279167274903283ULL;
unsigned long long int var_4 = 3385783810248570193ULL;
int var_6 = -637133641;
int var_7 = -142554255;
unsigned long long int var_8 = 15725994767019766671ULL;
long long int var_9 = 6236194543582262277LL;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)38589;
int var_12 = -1148612199;
signed char var_13 = (signed char)-99;
long long int var_14 = 4611183723421789600LL;
signed char var_15 = (signed char)42;
unsigned char var_16 = (unsigned char)229;
_Bool var_17 = (_Bool)0;
short var_18 = (short)-24932;
long long int var_19 = -974707813219344752LL;
unsigned char var_20 = (unsigned char)214;
long long int var_21 = -2421520357176906321LL;
long long int var_22 = -2586114408656992486LL;
_Bool var_23 = (_Bool)1;
unsigned char var_24 = (unsigned char)129;
unsigned short var_25 = (unsigned short)46468;
unsigned int var_26 = 2148471912U;
_Bool arr_0 [13] [13] ;
unsigned char arr_1 [13] [13] ;
int arr_7 [13] ;
unsigned long long int arr_10 [13] [13] [13] [13] ;
long long int arr_17 [13] [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)144;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = -244437205;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 15332239608016657354ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = -1125032535616586079LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
