#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 946810966553980627ULL;
unsigned short var_3 = (unsigned short)21409;
unsigned long long int var_4 = 1657275250301075857ULL;
unsigned short var_8 = (unsigned short)61689;
short var_9 = (short)5309;
signed char var_10 = (signed char)87;
unsigned short var_11 = (unsigned short)36390;
int zero = 0;
unsigned int var_13 = 3700306639U;
unsigned long long int var_14 = 12759393426658515789ULL;
unsigned short var_15 = (unsigned short)13305;
unsigned long long int arr_0 [25] [25] ;
unsigned long long int arr_4 [25] [25] ;
unsigned int arr_5 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = 3514118746540277470ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = 1483603013993300369ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = 1349196827U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
