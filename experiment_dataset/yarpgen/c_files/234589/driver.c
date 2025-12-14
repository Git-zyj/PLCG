#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)108;
unsigned long long int var_1 = 16369725841031284196ULL;
unsigned long long int var_3 = 12863209909496087063ULL;
unsigned long long int var_4 = 11488306024361338899ULL;
unsigned long long int var_5 = 2091589471516002697ULL;
int var_7 = 1218343848;
int var_8 = -1920968666;
signed char var_10 = (signed char)58;
int zero = 0;
long long int var_13 = -1252033697230546114LL;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)20;
unsigned char var_16 = (unsigned char)28;
unsigned int var_17 = 3870661662U;
unsigned int var_18 = 3203195915U;
unsigned short var_19 = (unsigned short)41184;
int var_20 = 303796777;
unsigned long long int var_21 = 14823035408569405385ULL;
int var_22 = 1128798763;
unsigned int arr_0 [21] ;
unsigned long long int arr_1 [21] [21] ;
unsigned long long int arr_2 [21] ;
unsigned long long int arr_4 [21] ;
unsigned long long int arr_5 [21] [21] [21] ;
_Bool arr_9 [21] [21] ;
signed char arr_11 [21] ;
unsigned short arr_17 [16] [16] [16] ;
short arr_20 [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 3548863214U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = 2699784715179474030ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 7610742616169002204ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 2144765694742800089ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 8560838563221430174ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_9 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = (signed char)-63;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (unsigned short)29890;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (short)-1701;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
