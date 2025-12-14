#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3949258858U;
unsigned long long int var_1 = 6607887350130789689ULL;
unsigned short var_2 = (unsigned short)43350;
int var_3 = 1769992685;
unsigned long long int var_5 = 6769920743589077605ULL;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)24693;
unsigned int var_8 = 3651969319U;
unsigned long long int var_9 = 5599640455920721932ULL;
short var_10 = (short)-12724;
int zero = 0;
unsigned char var_11 = (unsigned char)63;
unsigned char var_12 = (unsigned char)49;
unsigned int var_13 = 3502833356U;
signed char var_14 = (signed char)(-127 - 1);
short var_15 = (short)20362;
unsigned char arr_0 [23] ;
unsigned int arr_1 [23] [23] ;
int arr_2 [23] ;
unsigned short arr_5 [19] [19] ;
unsigned short arr_7 [19] ;
unsigned int arr_10 [16] ;
unsigned short arr_11 [16] ;
short arr_3 [23] ;
int arr_4 [23] ;
unsigned int arr_8 [19] ;
unsigned int arr_9 [19] ;
unsigned char arr_13 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned char)14;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = 139669650U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 1633634362;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)34322;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (unsigned short)20143;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = 662907116U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = (unsigned short)40488;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (short)-12898;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = -531359723;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = 2175194879U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = 3998106388U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned char)68;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
