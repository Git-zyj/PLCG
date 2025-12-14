#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)51;
short var_1 = (short)13829;
_Bool var_4 = (_Bool)1;
_Bool var_7 = (_Bool)1;
long long int var_10 = -8496529046609152614LL;
unsigned short var_12 = (unsigned short)32768;
signed char var_13 = (signed char)-17;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-17299;
long long int var_17 = 3675471730815447949LL;
unsigned int var_18 = 1128246138U;
int zero = 0;
unsigned short var_20 = (unsigned short)37103;
long long int var_21 = 5140642911173269551LL;
_Bool var_22 = (_Bool)0;
long long int var_23 = -7526868098027113063LL;
signed char var_24 = (signed char)85;
unsigned char var_25 = (unsigned char)20;
int var_26 = -61836750;
unsigned short var_27 = (unsigned short)42945;
long long int var_28 = -245349209557037346LL;
long long int var_29 = -4501053478638847840LL;
signed char arr_1 [10] ;
signed char arr_2 [10] [10] [10] ;
unsigned char arr_4 [10] [10] ;
long long int arr_6 [12] [12] ;
_Bool arr_8 [12] [12] [12] ;
signed char arr_10 [12] ;
short arr_5 [10] [10] [10] ;
signed char arr_12 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (signed char)104;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (signed char)94;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)150;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = 2658069107831446315LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = (signed char)-31;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)-19713;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_12 [i_0] = (signed char)23;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
