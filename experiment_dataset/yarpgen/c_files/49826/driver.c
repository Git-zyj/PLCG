#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10015412444738950186ULL;
unsigned int var_1 = 696350208U;
short var_2 = (short)-11284;
int var_3 = 1378076938;
short var_4 = (short)1862;
unsigned long long int var_5 = 4807389431399899009ULL;
unsigned int var_6 = 2329783219U;
unsigned long long int var_7 = 8045160949618851324ULL;
short var_9 = (short)20441;
short var_12 = (short)-17994;
unsigned int var_14 = 4223581771U;
signed char var_15 = (signed char)-50;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 9211690227480567927ULL;
signed char var_18 = (signed char)-113;
unsigned char var_19 = (unsigned char)33;
short var_20 = (short)-20288;
unsigned int var_21 = 2933813363U;
unsigned long long int var_22 = 9568098228729833164ULL;
unsigned long long int var_23 = 2713091599766293300ULL;
signed char arr_0 [17] ;
_Bool arr_1 [17] ;
unsigned char arr_5 [16] [16] ;
unsigned char arr_6 [23] ;
short arr_2 [17] ;
unsigned int arr_9 [23] ;
unsigned int arr_10 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (signed char)83;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)86;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (unsigned char)42;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (short)32249;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 51453408U : 2921793768U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 29351053U : 3151929712U;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
