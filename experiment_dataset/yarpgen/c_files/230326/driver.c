#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)21562;
int var_2 = -452487608;
short var_4 = (short)15966;
int var_6 = -914121770;
int var_7 = -798491475;
unsigned long long int var_8 = 1726787007034097308ULL;
_Bool var_10 = (_Bool)1;
short var_11 = (short)15866;
unsigned int var_14 = 273613059U;
int zero = 0;
unsigned char var_17 = (unsigned char)33;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)46843;
unsigned short var_20 = (unsigned short)58038;
unsigned char var_21 = (unsigned char)191;
signed char var_22 = (signed char)45;
unsigned int arr_0 [22] [22] ;
unsigned long long int arr_1 [22] ;
int arr_2 [22] [22] ;
unsigned long long int arr_5 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = 2637408478U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 12463150702891171955ULL : 1638336195761118965ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 1093300025 : -349381438;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = 13945850353061133701ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
