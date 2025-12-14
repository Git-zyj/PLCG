#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)4;
long long int var_3 = -4101899686449213572LL;
_Bool var_8 = (_Bool)0;
long long int var_9 = -8801794008672963559LL;
unsigned short var_10 = (unsigned short)52658;
int var_11 = 1588670732;
long long int var_14 = -5430626550505639736LL;
int var_15 = 1339375915;
unsigned long long int var_17 = 11710533141201060594ULL;
int var_18 = 1638347265;
int zero = 0;
unsigned char var_20 = (unsigned char)33;
_Bool var_21 = (_Bool)0;
long long int var_22 = 3533197686607832851LL;
signed char var_23 = (signed char)12;
int var_24 = -1415679446;
signed char var_25 = (signed char)-71;
int var_26 = -881367446;
unsigned char var_27 = (unsigned char)42;
unsigned long long int arr_0 [25] ;
int arr_1 [25] [25] ;
int arr_3 [25] ;
unsigned char arr_4 [25] [25] ;
int arr_5 [25] [25] [25] ;
short arr_6 [25] [25] ;
short arr_11 [25] [25] ;
unsigned char arr_12 [25] ;
unsigned long long int arr_13 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 2983017884170196422ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = -234986315;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = -2084733374;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)210;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 1824883466;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (short)-21920;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-22969 : (short)13592;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_12 [i_0] = (unsigned char)163;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_13 [i_0] = 7610946491476872371ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
