#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-89;
signed char var_3 = (signed char)91;
unsigned char var_5 = (unsigned char)36;
long long int var_6 = 1644370624526800235LL;
_Bool var_9 = (_Bool)1;
long long int var_10 = 3740560690026221554LL;
unsigned char var_11 = (unsigned char)238;
unsigned long long int var_12 = 16155722416915749850ULL;
int zero = 0;
signed char var_14 = (signed char)101;
unsigned char var_15 = (unsigned char)197;
short var_16 = (short)30341;
unsigned int var_17 = 676639981U;
signed char var_18 = (signed char)-118;
int var_19 = 1879504316;
int var_20 = 626202938;
unsigned long long int var_21 = 6634817597891401426ULL;
unsigned long long int var_22 = 6515132728260739210ULL;
int var_23 = -899447013;
int arr_1 [23] ;
long long int arr_2 [23] [23] ;
long long int arr_3 [23] ;
int arr_4 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 1379674529 : 289129147;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = -1972161196544678811LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = -9098056743133110200LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = 1821709973;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
