#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)6;
unsigned int var_5 = 3440382045U;
unsigned int var_7 = 2174883597U;
unsigned char var_8 = (unsigned char)203;
int var_10 = 1597761379;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 2646411358572419461ULL;
signed char var_13 = (signed char)89;
unsigned int var_14 = 2929403762U;
unsigned short var_15 = (unsigned short)24488;
signed char var_16 = (signed char)106;
short var_17 = (short)15804;
unsigned long long int var_18 = 11921438969430086820ULL;
unsigned long long int var_19 = 12586312259766819973ULL;
int var_20 = 398046551;
long long int arr_0 [20] ;
unsigned char arr_1 [20] ;
short arr_2 [20] ;
short arr_4 [20] ;
unsigned int arr_5 [20] [20] [20] ;
unsigned char arr_7 [20] [20] [20] [20] ;
signed char arr_9 [20] [20] [20] [20] ;
long long int arr_10 [20] [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 8571475209378466284LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned char)113;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (short)-22683;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (short)11950;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 3652560673U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned char)80;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (signed char)125;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = -9020396979981251572LL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
