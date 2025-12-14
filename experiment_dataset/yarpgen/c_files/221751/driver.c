#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)126;
unsigned int var_3 = 661604525U;
signed char var_5 = (signed char)-99;
long long int var_6 = -4443841892301685759LL;
unsigned int var_8 = 4128113455U;
short var_9 = (short)17774;
int zero = 0;
signed char var_10 = (signed char)6;
signed char var_11 = (signed char)116;
unsigned int var_12 = 1751027722U;
unsigned long long int var_13 = 18362077069929885280ULL;
unsigned long long int var_14 = 7777359010416043537ULL;
signed char var_15 = (signed char)-46;
unsigned int arr_0 [18] [18] ;
long long int arr_2 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? 419679816U : 3180285072U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 2642107824908479957LL : -7709526850464642250LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
