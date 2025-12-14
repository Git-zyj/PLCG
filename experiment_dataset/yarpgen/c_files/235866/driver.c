#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-27958;
unsigned long long int var_2 = 2464347416726189940ULL;
int var_3 = -1655210857;
short var_4 = (short)18400;
int var_5 = 607901052;
_Bool var_8 = (_Bool)0;
short var_12 = (short)-22985;
signed char var_13 = (signed char)-27;
int zero = 0;
long long int var_14 = -8934196897375953520LL;
int var_15 = -1012428891;
long long int var_16 = -4313268887449175990LL;
unsigned long long int arr_3 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = 16708086968660136284ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
