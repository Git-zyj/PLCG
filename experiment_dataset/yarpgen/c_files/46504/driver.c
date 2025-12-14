#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = -1144098133819018477LL;
unsigned int var_4 = 3946378694U;
int var_8 = 721691411;
signed char var_9 = (signed char)120;
unsigned long long int var_10 = 10963746846542667201ULL;
unsigned int var_15 = 3557108238U;
unsigned int var_16 = 781271237U;
unsigned short var_18 = (unsigned short)39365;
int zero = 0;
unsigned short var_20 = (unsigned short)24831;
unsigned char var_21 = (unsigned char)130;
unsigned int var_22 = 438973467U;
signed char var_23 = (signed char)-24;
long long int var_24 = -1814344564301765478LL;
long long int arr_0 [11] [11] ;
unsigned short arr_1 [11] ;
unsigned long long int arr_3 [11] ;
signed char arr_6 [11] [11] ;
unsigned long long int arr_7 [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = -5755897486938190450LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned short)60361;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 17805170309635291248ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)25 : (signed char)78;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 4001520169481953123ULL : 616479493014540404ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_7 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
