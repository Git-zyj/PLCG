#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)32067;
short var_1 = (short)25608;
unsigned int var_2 = 3962045121U;
unsigned short var_3 = (unsigned short)61356;
unsigned int var_6 = 1590675913U;
_Bool var_7 = (_Bool)1;
short var_10 = (short)-20642;
unsigned int var_11 = 3825585629U;
short var_12 = (short)17015;
short var_13 = (short)-10220;
unsigned long long int var_14 = 3272650465823114200ULL;
int zero = 0;
short var_16 = (short)16125;
unsigned int var_17 = 785755764U;
unsigned int var_18 = 3713086081U;
signed char var_19 = (signed char)16;
short var_20 = (short)25682;
unsigned short var_21 = (unsigned short)29448;
_Bool var_22 = (_Bool)0;
unsigned short var_23 = (unsigned short)55535;
short var_24 = (short)-22138;
short arr_0 [16] ;
signed char arr_1 [16] [16] ;
signed char arr_2 [16] ;
unsigned int arr_4 [16] ;
unsigned int arr_6 [16] [16] ;
signed char arr_13 [16] [16] [16] ;
short arr_15 [16] [16] ;
short arr_3 [16] ;
unsigned long long int arr_7 [16] ;
unsigned long long int arr_11 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (short)28501;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-55;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (signed char)-35;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 1762681865U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = 313714860U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (signed char)103;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_15 [i_0] [i_1] = (short)-8376;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (short)28042;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 8433590856420102733ULL : 736019932288980482ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = 8778698775505176137ULL;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
