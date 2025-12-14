#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)0;
unsigned long long int var_8 = 11775383460484305856ULL;
unsigned int var_9 = 2824597505U;
signed char var_10 = (signed char)-62;
unsigned char var_11 = (unsigned char)148;
unsigned long long int var_12 = 8393441131629450642ULL;
signed char var_15 = (signed char)41;
int var_16 = 1145392557;
int var_17 = -1476638683;
int zero = 0;
unsigned long long int var_19 = 10566872857562121947ULL;
signed char var_20 = (signed char)-84;
_Bool arr_1 [10] ;
int arr_4 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 1909261569;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
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
