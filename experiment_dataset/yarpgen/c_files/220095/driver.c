#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = -2552647700691871242LL;
int var_2 = -713074378;
unsigned char var_3 = (unsigned char)177;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)15899;
unsigned long long int var_6 = 14146765683483122294ULL;
long long int var_8 = -2788778615993758210LL;
unsigned short var_10 = (unsigned short)48294;
int zero = 0;
signed char var_11 = (signed char)-29;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)56037;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 2347104321213421596ULL;
signed char var_16 = (signed char)96;
short var_17 = (short)-32084;
unsigned long long int var_18 = 8034769486358560565ULL;
unsigned short var_19 = (unsigned short)34951;
unsigned short var_20 = (unsigned short)62076;
long long int var_21 = 3804940740653353456LL;
_Bool var_22 = (_Bool)1;
long long int var_23 = -3612019401615944805LL;
signed char arr_1 [19] ;
signed char arr_2 [19] ;
unsigned short arr_3 [19] [19] ;
unsigned int arr_5 [19] [19] [19] ;
_Bool arr_7 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (signed char)32;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (signed char)47;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)17678;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 1519841088U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = (_Bool)0;
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
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
