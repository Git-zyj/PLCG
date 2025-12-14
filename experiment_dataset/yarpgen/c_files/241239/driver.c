#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)23500;
_Bool var_2 = (_Bool)1;
int var_3 = 177728262;
signed char var_5 = (signed char)123;
unsigned short var_12 = (unsigned short)43255;
signed char var_16 = (signed char)95;
unsigned short var_18 = (unsigned short)20279;
int zero = 0;
_Bool var_19 = (_Bool)1;
short var_20 = (short)29371;
unsigned int var_21 = 2433595899U;
signed char arr_0 [19] ;
unsigned int arr_1 [19] ;
unsigned short arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (signed char)47;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 3166006504U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned short)9743;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
