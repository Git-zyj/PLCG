#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 749009984U;
signed char var_6 = (signed char)-122;
unsigned int var_7 = 230830562U;
int var_8 = -619319668;
unsigned int var_9 = 1041395052U;
unsigned short var_10 = (unsigned short)58453;
unsigned int var_11 = 149538127U;
long long int var_14 = 6901824416705462126LL;
int zero = 0;
unsigned long long int var_16 = 11063825075640445475ULL;
int var_17 = -2012878162;
unsigned int var_18 = 335990900U;
unsigned long long int arr_3 [23] [23] [23] ;
short arr_5 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 17525754303985333072ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)-7744 : (short)-22243;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
