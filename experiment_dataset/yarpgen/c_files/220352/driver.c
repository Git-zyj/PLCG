#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)115;
int var_1 = -638593453;
unsigned short var_2 = (unsigned short)3698;
int var_3 = 1625012268;
unsigned short var_4 = (unsigned short)32411;
int var_5 = -508576216;
unsigned char var_6 = (unsigned char)42;
_Bool var_7 = (_Bool)0;
long long int var_11 = -4821960768346778955LL;
unsigned char var_12 = (unsigned char)114;
long long int var_15 = 6978603068195285384LL;
unsigned short var_16 = (unsigned short)65275;
unsigned char var_17 = (unsigned char)201;
int zero = 0;
signed char var_20 = (signed char)-13;
int var_21 = -201272725;
short var_22 = (short)-1451;
long long int var_23 = 6161163222281712982LL;
long long int arr_1 [19] ;
unsigned char arr_2 [19] [19] ;
unsigned int arr_3 [19] ;
long long int arr_5 [19] [19] ;
unsigned short arr_8 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = -6206054632914969944LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)251;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 1646558558U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = -7711055872441372237LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = (unsigned short)30811;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
