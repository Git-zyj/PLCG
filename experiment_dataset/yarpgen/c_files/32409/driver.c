#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -8558562843353345844LL;
unsigned long long int var_5 = 6175861778177831276ULL;
int var_6 = -563941092;
unsigned char var_7 = (unsigned char)73;
long long int var_8 = -485339772644842763LL;
int var_9 = 1806975538;
unsigned char var_10 = (unsigned char)40;
signed char var_11 = (signed char)-107;
int zero = 0;
signed char var_15 = (signed char)6;
int var_16 = 1197860068;
unsigned char var_17 = (unsigned char)85;
signed char var_18 = (signed char)-97;
int var_19 = 2021388419;
unsigned char var_20 = (unsigned char)192;
signed char var_21 = (signed char)-12;
int var_22 = -817883592;
int arr_0 [10] [10] ;
unsigned char arr_1 [10] ;
long long int arr_2 [10] ;
int arr_3 [10] [10] [10] ;
long long int arr_4 [10] ;
signed char arr_5 [10] [10] [10] ;
unsigned int arr_6 [10] ;
int arr_8 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = -1929506648;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned char)122;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -5757589292195443074LL : 5815869181856901701LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -2111018655;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = -5361841439036516934LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)-40;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = 1494550735U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? -931577052 : 669426159;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
