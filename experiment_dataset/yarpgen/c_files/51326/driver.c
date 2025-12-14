#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 519663917;
_Bool var_10 = (_Bool)1;
unsigned int var_13 = 746328184U;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)11058;
unsigned long long int var_18 = 10402683373462747982ULL;
int zero = 0;
unsigned long long int var_19 = 3445462572934736552ULL;
long long int var_20 = -1989530957255864592LL;
signed char var_21 = (signed char)4;
_Bool var_22 = (_Bool)0;
unsigned short var_23 = (unsigned short)18532;
unsigned long long int var_24 = 13824744543708568939ULL;
_Bool var_25 = (_Bool)0;
unsigned short var_26 = (unsigned short)17471;
_Bool var_27 = (_Bool)0;
unsigned int var_28 = 938233091U;
unsigned long long int var_29 = 17581839987296487797ULL;
unsigned long long int var_30 = 7596164514120598323ULL;
_Bool arr_0 [25] [25] ;
signed char arr_3 [25] ;
unsigned char arr_4 [10] ;
unsigned char arr_5 [10] [10] ;
unsigned long long int arr_7 [10] ;
unsigned long long int arr_8 [10] [10] [10] ;
unsigned long long int arr_10 [10] [10] ;
_Bool arr_11 [10] ;
unsigned long long int arr_12 [10] [10] ;
short arr_14 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (signed char)-120;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (unsigned char)247;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)45;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = 7521838274066503693ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 6381017268503105991ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_10 [i_0] [i_1] = 5457756863216231940ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_12 [i_0] [i_1] = 2142720723715760225ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_14 [i_0] [i_1] = (short)-14498;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
