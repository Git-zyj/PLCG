#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3825724762U;
unsigned short var_2 = (unsigned short)8931;
int var_3 = 1318244472;
unsigned char var_5 = (unsigned char)118;
unsigned int var_6 = 372767315U;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 1140123819U;
unsigned long long int var_9 = 4562006907731106461ULL;
short var_10 = (short)-20962;
unsigned long long int var_11 = 9403863309668112741ULL;
short var_12 = (short)2992;
unsigned long long int var_13 = 13333608263814919669ULL;
unsigned long long int var_16 = 6772452532462307587ULL;
unsigned short var_17 = (unsigned short)12383;
int zero = 0;
unsigned long long int var_19 = 1595451957655032031ULL;
int var_20 = 256195727;
short var_21 = (short)-25652;
long long int var_22 = -343871359942928907LL;
int var_23 = 802395088;
_Bool var_24 = (_Bool)0;
unsigned int var_25 = 2819364818U;
long long int var_26 = 744388099868806476LL;
_Bool var_27 = (_Bool)1;
unsigned long long int var_28 = 12395794222694833860ULL;
unsigned char var_29 = (unsigned char)83;
unsigned long long int var_30 = 16701594167842974634ULL;
short arr_0 [21] ;
unsigned long long int arr_1 [21] ;
short arr_2 [21] [21] ;
unsigned long long int arr_3 [21] [21] ;
unsigned char arr_5 [21] ;
long long int arr_6 [21] [21] ;
unsigned long long int arr_7 [21] ;
int arr_4 [21] [21] ;
unsigned long long int arr_9 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (short)-21380;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 11756138056481765138ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-22389;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = 5222778170877790875ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (unsigned char)39;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = -2147296924077917581LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = 9786603970750977038ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = -1099593765;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_9 [i_0] [i_1] = 6002463771532051907ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
