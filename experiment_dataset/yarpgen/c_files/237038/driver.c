#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1957255272;
_Bool var_3 = (_Bool)1;
signed char var_5 = (signed char)100;
long long int var_7 = 2856166185606857899LL;
unsigned int var_8 = 951652217U;
unsigned char var_9 = (unsigned char)76;
long long int var_12 = 456872381108232993LL;
unsigned long long int var_14 = 5854784698037304687ULL;
unsigned int var_15 = 4079035326U;
int zero = 0;
int var_19 = -7960098;
int var_20 = 1693437762;
unsigned char var_21 = (unsigned char)247;
short var_22 = (short)-11599;
long long int arr_0 [10] ;
unsigned long long int arr_1 [10] [10] ;
unsigned long long int arr_2 [10] ;
unsigned int arr_3 [10] ;
unsigned int arr_4 [10] ;
_Bool arr_5 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = -1983463068837610102LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = 13891671641508344727ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 8892320884350541646ULL : 16798475607413826988ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 720104526U : 533995155U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 1325730764U : 1589170011U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
