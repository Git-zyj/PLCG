#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)47014;
short var_1 = (short)1102;
short var_2 = (short)-18712;
unsigned int var_3 = 217332466U;
signed char var_4 = (signed char)30;
int var_7 = -1767503293;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 2471804272U;
unsigned int var_10 = 621283209U;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)16546;
unsigned short var_13 = (unsigned short)41850;
unsigned short var_16 = (unsigned short)41674;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 2192781882U;
unsigned int var_19 = 3328244153U;
unsigned short var_20 = (unsigned short)41999;
unsigned short var_21 = (unsigned short)1109;
unsigned int var_22 = 1060347496U;
short var_23 = (short)-7121;
unsigned short var_24 = (unsigned short)30858;
unsigned short var_25 = (unsigned short)4517;
unsigned long long int arr_0 [24] [24] ;
unsigned char arr_1 [24] ;
unsigned char arr_2 [24] [24] ;
unsigned short arr_3 [24] [24] ;
int arr_5 [24] [24] ;
signed char arr_9 [23] ;
short arr_6 [24] [24] [24] ;
signed char arr_12 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = 12172053529849241691ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned char)162;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)81;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)8204 : (unsigned short)16380;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = 572451347;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (signed char)-44 : (signed char)21;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)22952 : (short)12833;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_12 [i_0] [i_1] = (signed char)51;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
