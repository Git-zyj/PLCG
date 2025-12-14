#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
short var_3 = (short)-19403;
long long int var_4 = -7984477105326649596LL;
unsigned char var_6 = (unsigned char)193;
_Bool var_8 = (_Bool)0;
short var_9 = (short)-5607;
unsigned char var_10 = (unsigned char)141;
int zero = 0;
unsigned short var_11 = (unsigned short)26951;
long long int var_12 = -7444906810204677927LL;
short var_13 = (short)-17072;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)26710;
unsigned int var_16 = 1566703452U;
_Bool var_17 = (_Bool)1;
long long int var_18 = 1065148786845925439LL;
unsigned char arr_0 [20] [20] ;
long long int arr_1 [20] ;
signed char arr_3 [20] [20] ;
signed char arr_4 [20] ;
_Bool arr_11 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)211;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 3583239796877122468LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)16;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (signed char)124;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
