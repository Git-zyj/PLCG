#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5326462974621164162ULL;
unsigned char var_1 = (unsigned char)66;
int var_3 = 1943717665;
int var_4 = -1122242113;
unsigned short var_5 = (unsigned short)35070;
unsigned short var_6 = (unsigned short)59482;
int var_7 = 1077036348;
long long int var_8 = -4406589429249789585LL;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 194452707U;
int var_13 = 462498210;
int var_14 = 2117971739;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)-33;
unsigned int var_17 = 2335907224U;
signed char var_18 = (signed char)-49;
unsigned short arr_0 [11] [11] ;
unsigned char arr_1 [11] ;
long long int arr_2 [11] ;
unsigned long long int arr_3 [11] [11] [11] ;
unsigned short arr_4 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)21253 : (unsigned short)12033;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned char)69;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -4922755003557102141LL : 1679039291407260033LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 13578171740729322628ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)1862 : (unsigned short)30018;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
