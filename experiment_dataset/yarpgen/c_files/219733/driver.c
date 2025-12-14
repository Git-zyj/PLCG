#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1660018569848537392LL;
unsigned short var_1 = (unsigned short)30474;
unsigned long long int var_2 = 9611873783953159509ULL;
unsigned char var_3 = (unsigned char)68;
unsigned short var_6 = (unsigned short)25814;
signed char var_7 = (signed char)-112;
unsigned long long int var_8 = 10139381358471914567ULL;
unsigned char var_9 = (unsigned char)254;
unsigned long long int var_10 = 11034490281532986066ULL;
int var_11 = 1688530783;
int zero = 0;
signed char var_12 = (signed char)-86;
signed char var_13 = (signed char)113;
unsigned short var_14 = (unsigned short)55776;
int var_15 = 1298144294;
unsigned long long int var_16 = 10679269043969660180ULL;
unsigned long long int var_17 = 13382463673037026096ULL;
unsigned long long int var_18 = 2191505662141341803ULL;
unsigned int var_19 = 10232482U;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 11454404660946518394ULL;
int var_22 = 19441560;
int arr_0 [16] ;
signed char arr_1 [16] ;
unsigned int arr_3 [16] [16] ;
unsigned short arr_11 [19] [19] ;
unsigned char arr_13 [19] ;
_Bool arr_22 [19] [19] [19] [19] [19] [19] ;
unsigned short arr_16 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 1855449487;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (signed char)126;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = 1767003822U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)13843 : (unsigned short)4934;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_13 [i_0] = (unsigned char)174;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)3011 : (unsigned short)6839;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
