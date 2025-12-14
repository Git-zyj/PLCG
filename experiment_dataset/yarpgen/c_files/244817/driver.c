#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)15;
signed char var_2 = (signed char)86;
signed char var_3 = (signed char)3;
short var_4 = (short)-20925;
int var_5 = -669152909;
unsigned short var_8 = (unsigned short)35618;
short var_12 = (short)14995;
short var_15 = (short)-26630;
int var_18 = 437201197;
int zero = 0;
unsigned short var_19 = (unsigned short)44501;
signed char var_20 = (signed char)-57;
int var_21 = 1698404621;
unsigned long long int var_22 = 17872124811927117677ULL;
_Bool var_23 = (_Bool)1;
long long int var_24 = -3544917447796413023LL;
int var_25 = -561576348;
signed char arr_0 [15] ;
int arr_1 [15] ;
int arr_2 [15] ;
unsigned long long int arr_3 [15] ;
int arr_4 [15] ;
unsigned long long int arr_5 [15] [15] [15] ;
unsigned long long int arr_6 [15] [15] ;
long long int arr_8 [15] [15] [15] ;
signed char arr_9 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (signed char)-33;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = -283970663;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = -1541559615;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 2291167089122224055ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = -2075184757;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 2099376663277509135ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = 9567319264481806541ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = -8508330485183017914LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)14;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
