#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14958935874782175623ULL;
signed char var_2 = (signed char)-51;
unsigned long long int var_3 = 5668619629553445879ULL;
unsigned short var_4 = (unsigned short)38404;
unsigned short var_5 = (unsigned short)6047;
unsigned short var_6 = (unsigned short)2816;
unsigned short var_7 = (unsigned short)46531;
int var_8 = 2140492972;
unsigned int var_9 = 2081182048U;
int zero = 0;
unsigned long long int var_10 = 7669707362581763400ULL;
unsigned short var_11 = (unsigned short)39391;
int var_12 = -1480509501;
unsigned short var_13 = (unsigned short)42443;
int var_14 = -335643472;
signed char var_15 = (signed char)53;
int var_16 = 1521398049;
unsigned int arr_2 [18] ;
int arr_9 [19] [19] ;
unsigned long long int arr_10 [19] ;
int arr_7 [13] [13] ;
int arr_8 [13] [13] ;
unsigned int arr_11 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 3664526586U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_9 [i_0] [i_1] = 259890207;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = 12943574133769520796ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_7 [i_0] [i_1] = -1019236332;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_8 [i_0] [i_1] = -1419472199;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = 1139138393U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
