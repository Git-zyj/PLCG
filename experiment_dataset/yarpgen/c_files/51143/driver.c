#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1710660611U;
unsigned long long int var_3 = 16681907088937993001ULL;
unsigned int var_4 = 259220882U;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)4563;
unsigned int var_7 = 2431281410U;
unsigned short var_10 = (unsigned short)58023;
int zero = 0;
unsigned long long int var_11 = 4494365485577146107ULL;
unsigned long long int var_12 = 16097174705760301233ULL;
unsigned long long int var_13 = 7162728895377044639ULL;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)32009;
unsigned int var_16 = 125928473U;
unsigned short var_17 = (unsigned short)31878;
_Bool arr_0 [18] ;
int arr_1 [18] ;
_Bool arr_5 [18] [18] ;
unsigned char arr_2 [18] [18] ;
short arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = -2999698;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)93;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (short)-10520;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
