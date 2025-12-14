#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)136;
unsigned int var_2 = 1841793773U;
unsigned int var_3 = 1932136461U;
unsigned char var_4 = (unsigned char)83;
unsigned char var_5 = (unsigned char)254;
long long int var_6 = -9073833122393761931LL;
long long int var_9 = -5279059605527992317LL;
unsigned int var_10 = 3729153994U;
int var_11 = 1422168406;
long long int var_12 = 6084630329497811379LL;
unsigned int var_13 = 2234850556U;
unsigned long long int var_14 = 17815448167232156171ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)82;
unsigned int var_16 = 3982399724U;
int var_17 = 1890414464;
unsigned char var_18 = (unsigned char)22;
unsigned char var_19 = (unsigned char)172;
signed char var_20 = (signed char)97;
unsigned long long int var_21 = 8084467288342595704ULL;
unsigned int arr_1 [21] ;
unsigned char arr_3 [22] ;
int arr_4 [22] ;
unsigned int arr_2 [21] [21] ;
unsigned long long int arr_5 [22] [22] ;
long long int arr_6 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 694484998U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (unsigned char)115;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = -319026239;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = 1829433902U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = 6612069367220527714ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = 7451840431795312715LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
