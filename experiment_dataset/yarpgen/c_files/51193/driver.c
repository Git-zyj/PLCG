#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)29;
int var_3 = -1045320446;
long long int var_5 = -8589029275000884209LL;
unsigned short var_7 = (unsigned short)51559;
_Bool var_8 = (_Bool)0;
long long int var_11 = -6174720912954007010LL;
long long int var_12 = -7898170912702177855LL;
unsigned short var_13 = (unsigned short)25200;
long long int var_14 = 1925822035713470247LL;
unsigned short var_15 = (unsigned short)54344;
int zero = 0;
signed char var_18 = (signed char)116;
int var_19 = -1626809267;
short var_20 = (short)2988;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 9594400882945768079ULL;
unsigned short var_23 = (unsigned short)6647;
unsigned char var_24 = (unsigned char)30;
unsigned char arr_0 [15] [15] ;
unsigned long long int arr_2 [15] ;
int arr_3 [15] ;
long long int arr_6 [15] ;
signed char arr_7 [15] [15] ;
int arr_8 [15] [15] ;
int arr_9 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)18;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 17488409986984612042ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 535947137;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = -5204844577216963533LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)108;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_8 [i_0] [i_1] = 787740319;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = -68743127;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
