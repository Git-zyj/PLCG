#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1185090303;
long long int var_6 = -1996025596867035732LL;
_Bool var_9 = (_Bool)0;
long long int var_12 = -3838542285478672402LL;
short var_15 = (short)11486;
int zero = 0;
unsigned int var_17 = 4144730441U;
int var_18 = -221767569;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 3721512837U;
unsigned long long int var_21 = 8848704813040226828ULL;
long long int var_22 = 8618793050469389668LL;
short arr_0 [10] ;
int arr_1 [10] [10] ;
unsigned int arr_4 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)13161 : (short)11026;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = 731268544;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 2162050721U : 1767164371U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
