#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)19132;
unsigned long long int var_7 = 9086908717440366155ULL;
unsigned short var_9 = (unsigned short)62553;
signed char var_10 = (signed char)-32;
int var_13 = -1216654647;
int zero = 0;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)65;
int var_20 = -383924559;
int var_21 = 65293501;
signed char var_22 = (signed char)105;
_Bool var_23 = (_Bool)0;
long long int var_24 = -8014148388671171775LL;
long long int var_25 = -9046761764244957779LL;
int arr_1 [25] [25] ;
signed char arr_2 [25] ;
long long int arr_9 [23] ;
short arr_3 [25] ;
unsigned short arr_4 [25] [25] ;
signed char arr_10 [23] ;
_Bool arr_11 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = -1103122136;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (signed char)4;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = -4366282927548628981LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)-6023 : (short)-30315;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)40099 : (unsigned short)24869;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (signed char)-100 : (signed char)23;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
