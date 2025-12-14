#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-112;
unsigned char var_6 = (unsigned char)106;
int zero = 0;
int var_17 = -1620960389;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)3185;
unsigned long long int var_20 = 2512842998240315358ULL;
signed char var_21 = (signed char)16;
unsigned char arr_0 [23] ;
unsigned long long int arr_1 [23] ;
unsigned long long int arr_3 [23] ;
unsigned char arr_4 [23] [23] [23] ;
unsigned long long int arr_5 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned char)151;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 14541461981816755579ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 16863414770175037551ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)90;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 3206060630946501021ULL;
}

void checksum() {
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
