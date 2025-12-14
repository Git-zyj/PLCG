#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)47292;
unsigned short var_1 = (unsigned short)24298;
unsigned int var_2 = 419975213U;
unsigned int var_3 = 462990635U;
unsigned int var_4 = 1025192668U;
unsigned int var_5 = 4056304802U;
unsigned short var_8 = (unsigned short)15125;
unsigned int var_10 = 2668480446U;
int zero = 0;
unsigned int var_11 = 2721106865U;
unsigned short var_12 = (unsigned short)18715;
unsigned int var_13 = 4281802089U;
unsigned short var_14 = (unsigned short)34761;
unsigned short var_15 = (unsigned short)16387;
unsigned int var_16 = 1222589854U;
unsigned int var_17 = 3820962271U;
unsigned short var_18 = (unsigned short)28020;
unsigned short arr_1 [23] ;
unsigned short arr_2 [23] ;
unsigned int arr_3 [23] [23] ;
unsigned int arr_4 [23] [23] ;
unsigned int arr_8 [20] ;
unsigned short arr_10 [20] [20] ;
unsigned short arr_6 [23] ;
unsigned int arr_7 [23] ;
unsigned short arr_11 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned short)34180;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned short)58246;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = 750407227U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = 3085222953U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = 586989688U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned short)61442;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (unsigned short)38123;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = 3341975024U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = (unsigned short)59673;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
