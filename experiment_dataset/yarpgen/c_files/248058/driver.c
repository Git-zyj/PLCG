#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-39;
unsigned long long int var_2 = 15921384231720635552ULL;
_Bool var_4 = (_Bool)0;
signed char var_6 = (signed char)97;
unsigned int var_8 = 309337549U;
long long int var_9 = 1756014242654242008LL;
short var_11 = (short)578;
long long int var_12 = -4220405243890953390LL;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)120;
int zero = 0;
unsigned long long int var_16 = 7980939580523990639ULL;
short var_17 = (short)-11530;
int var_18 = -852266461;
short var_19 = (short)28380;
unsigned char var_20 = (unsigned char)62;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)125;
_Bool var_23 = (_Bool)0;
unsigned long long int arr_0 [23] [23] ;
unsigned long long int arr_2 [23] ;
long long int arr_6 [23] [23] ;
long long int arr_8 [23] [23] [23] [23] ;
_Bool arr_13 [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? 1945032662814509714ULL : 13077348986687453864ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 7161196800168419197ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? 670999716981352388LL : 1046107515372715592LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = -5243309148649673165LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
