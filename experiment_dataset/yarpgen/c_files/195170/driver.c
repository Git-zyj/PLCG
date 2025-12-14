#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2790032014323496054ULL;
unsigned char var_2 = (unsigned char)227;
unsigned short var_7 = (unsigned short)7724;
unsigned short var_8 = (unsigned short)45343;
short var_9 = (short)6014;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned int var_18 = 1867711318U;
unsigned int var_19 = 3132257866U;
int var_20 = 1183500362;
unsigned long long int var_21 = 7238669392337635176ULL;
unsigned short var_22 = (unsigned short)11865;
unsigned short var_23 = (unsigned short)24536;
unsigned char var_24 = (unsigned char)42;
signed char var_25 = (signed char)105;
unsigned short var_26 = (unsigned short)33618;
signed char var_27 = (signed char)61;
int var_28 = -80455199;
long long int var_29 = -5124734668314484121LL;
long long int var_30 = 8065584005520991229LL;
unsigned short var_31 = (unsigned short)59330;
unsigned char var_32 = (unsigned char)226;
unsigned short var_33 = (unsigned short)7541;
signed char var_34 = (signed char)5;
_Bool var_35 = (_Bool)1;
short var_36 = (short)8854;
long long int arr_0 [14] ;
int arr_1 [14] ;
unsigned char arr_2 [14] ;
unsigned long long int arr_3 [22] ;
_Bool arr_4 [22] ;
unsigned long long int arr_5 [22] ;
_Bool arr_6 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = -6130721688245417841LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 782445102;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned char)197;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 1283683219745412154ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = 13445531549690344942ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
