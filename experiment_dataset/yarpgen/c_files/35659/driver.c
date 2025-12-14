#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4213141201U;
unsigned short var_3 = (unsigned short)44755;
int var_6 = 1817996159;
short var_7 = (short)-22707;
unsigned int var_8 = 2865593417U;
unsigned int var_10 = 1719705940U;
long long int var_11 = -7799554939146451598LL;
long long int var_12 = 3606600037511734236LL;
long long int var_13 = 7793787812604868912LL;
int zero = 0;
unsigned int var_14 = 1970035833U;
unsigned int var_15 = 1230422550U;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-5976;
unsigned int var_18 = 2663572805U;
unsigned int var_19 = 2322620401U;
unsigned long long int var_20 = 11479420455794458479ULL;
unsigned long long int var_21 = 16123772749218339891ULL;
unsigned int arr_0 [16] ;
unsigned short arr_1 [16] ;
unsigned int arr_3 [16] [16] [16] ;
_Bool arr_4 [16] ;
long long int arr_8 [16] [16] ;
unsigned int arr_9 [16] ;
unsigned short arr_6 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 1352068085U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned short)21616;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 153559903U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? 6850848469980522314LL : -3903517997019056534LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = 1239461639U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)44837;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
