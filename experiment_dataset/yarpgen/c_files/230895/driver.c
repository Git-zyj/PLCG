#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)14845;
short var_1 = (short)3624;
_Bool var_2 = (_Bool)0;
short var_3 = (short)-26918;
unsigned int var_4 = 3790147562U;
unsigned char var_5 = (unsigned char)28;
int var_7 = -627023037;
unsigned long long int var_8 = 8874174040324634984ULL;
unsigned short var_9 = (unsigned short)54892;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned long long int var_11 = 5090435118444160491ULL;
long long int var_12 = -2205093935697376856LL;
_Bool var_13 = (_Bool)1;
short var_14 = (short)3125;
long long int var_15 = -3994968102797699569LL;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-74;
unsigned short var_18 = (unsigned short)51978;
signed char var_19 = (signed char)127;
unsigned short var_20 = (unsigned short)4728;
int var_21 = -1609793651;
unsigned short arr_0 [21] ;
int arr_2 [21] [21] ;
unsigned char arr_3 [21] [21] [21] ;
unsigned int arr_4 [21] [21] ;
int arr_5 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned short)23588;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = 1888970146;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)33;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = 3719269407U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1799585688 : 280979704;
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
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
