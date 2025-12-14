#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4876086706733153432ULL;
unsigned long long int var_2 = 12162623833828606563ULL;
_Bool var_3 = (_Bool)1;
int var_7 = -1356644148;
unsigned long long int var_9 = 4365198428395467913ULL;
signed char var_12 = (signed char)107;
int zero = 0;
_Bool var_13 = (_Bool)1;
short var_14 = (short)-20156;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 844745849069444653ULL;
int var_17 = 191727000;
unsigned char arr_2 [23] ;
int arr_3 [23] ;
long long int arr_6 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned char)206;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 18402459;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? -7886138453990572438LL : 3722797137708188471LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
