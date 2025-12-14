#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18373;
int var_2 = 1807583435;
unsigned short var_6 = (unsigned short)31848;
unsigned short var_7 = (unsigned short)52102;
short var_11 = (short)-32625;
long long int var_12 = 8060732747262192265LL;
unsigned int var_14 = 2551113716U;
long long int var_15 = -3968708684834096763LL;
int zero = 0;
long long int var_18 = -8942396017035222128LL;
_Bool var_19 = (_Bool)0;
int var_20 = -433071485;
unsigned short var_21 = (unsigned short)22019;
signed char arr_5 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)87;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
