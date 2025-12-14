#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 117060831U;
unsigned short var_2 = (unsigned short)10907;
unsigned short var_5 = (unsigned short)26376;
long long int var_7 = 3311056215751088245LL;
int var_8 = -455465839;
unsigned int var_9 = 1164898475U;
short var_10 = (short)1544;
unsigned short var_12 = (unsigned short)15631;
int zero = 0;
unsigned long long int var_13 = 14516188494472975510ULL;
unsigned int var_14 = 1238096742U;
_Bool var_15 = (_Bool)1;
int var_16 = 1664828325;
unsigned int var_17 = 1656067571U;
unsigned int arr_0 [21] ;
signed char arr_3 [21] ;
_Bool arr_6 [21] ;
signed char arr_7 [21] [21] ;
unsigned long long int arr_9 [21] ;
int arr_10 [21] ;
short arr_11 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 2633112341U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (signed char)126;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)69;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = 2745493062946708751ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = 817005441;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (short)-14355;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
