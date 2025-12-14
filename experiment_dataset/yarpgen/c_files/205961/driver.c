#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)50066;
short var_1 = (short)-24666;
unsigned short var_3 = (unsigned short)45084;
signed char var_7 = (signed char)42;
unsigned long long int var_8 = 1500739006338991595ULL;
short var_10 = (short)17518;
int zero = 0;
int var_11 = 763736561;
unsigned int var_12 = 2784035703U;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)29738;
unsigned int var_15 = 3036195640U;
int var_16 = -1771270271;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)57;
unsigned short var_19 = (unsigned short)15804;
signed char var_20 = (signed char)60;
unsigned short var_21 = (unsigned short)61577;
_Bool arr_0 [11] ;
unsigned char arr_1 [11] ;
unsigned short arr_2 [11] ;
long long int arr_3 [24] [24] ;
unsigned char arr_4 [24] ;
unsigned int arr_6 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned char)49 : (unsigned char)235;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)56576 : (unsigned short)7479;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = 6407355787336955069LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (unsigned char)192;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = 325256994U;
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
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
