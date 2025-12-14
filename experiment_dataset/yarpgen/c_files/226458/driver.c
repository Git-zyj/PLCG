#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-62;
unsigned char var_1 = (unsigned char)195;
signed char var_7 = (signed char)-53;
unsigned int var_10 = 4283488083U;
unsigned short var_12 = (unsigned short)52714;
int zero = 0;
short var_13 = (short)13191;
unsigned int var_14 = 2465884250U;
int var_15 = -209352264;
short var_16 = (short)23859;
unsigned int var_17 = 1927801930U;
unsigned short arr_0 [23] ;
int arr_1 [23] ;
unsigned short arr_3 [11] ;
unsigned short arr_10 [15] ;
int arr_2 [23] [23] ;
unsigned char arr_5 [11] ;
unsigned int arr_6 [11] ;
int arr_11 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)42302 : (unsigned short)60496;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 27068342 : -954883482;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (unsigned short)18933;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = (unsigned short)63196;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 1652483056 : 1427389024;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (unsigned char)4;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = 3005201424U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_11 [i_0] = -1590106404;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
