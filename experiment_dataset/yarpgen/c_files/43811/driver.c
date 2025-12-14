#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1873322478U;
unsigned long long int var_3 = 17118488252710547552ULL;
unsigned short var_7 = (unsigned short)45547;
int zero = 0;
unsigned char var_10 = (unsigned char)151;
int var_11 = -128820023;
long long int var_12 = -4055725826678241340LL;
unsigned long long int var_13 = 8315922102621660125ULL;
unsigned char var_14 = (unsigned char)2;
unsigned int var_15 = 1775671971U;
signed char var_16 = (signed char)110;
unsigned long long int var_17 = 268014515214017442ULL;
int arr_0 [24] ;
short arr_1 [24] ;
unsigned short arr_6 [12] ;
int arr_9 [12] [12] [12] [12] ;
unsigned long long int arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = -1674028521;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (short)-13046;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (unsigned short)29471;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 362152869;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 2557481887231611529ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
