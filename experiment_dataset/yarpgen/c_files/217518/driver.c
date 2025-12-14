#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5134058175064925126ULL;
short var_2 = (short)-25994;
int var_9 = 902088653;
short var_10 = (short)-14039;
unsigned long long int var_11 = 13078815505405007056ULL;
unsigned int var_12 = 304914601U;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned long long int var_16 = 2834291109146522610ULL;
long long int var_17 = -6214931564940423489LL;
int var_18 = -1067015172;
unsigned char var_19 = (unsigned char)186;
unsigned char var_20 = (unsigned char)157;
unsigned char var_21 = (unsigned char)150;
unsigned int var_22 = 3196829646U;
unsigned short var_23 = (unsigned short)18693;
short var_24 = (short)-25520;
short arr_3 [23] [23] ;
int arr_5 [23] [23] ;
_Bool arr_10 [23] ;
int arr_4 [23] ;
unsigned short arr_12 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-11161;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = 1447999798;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 1228371465;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = (unsigned short)40550;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
