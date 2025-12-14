#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_2 = (unsigned char)50;
unsigned char var_8 = (unsigned char)132;
_Bool var_9 = (_Bool)1;
int var_10 = -1618349423;
unsigned int var_11 = 1269010860U;
_Bool var_15 = (_Bool)0;
int zero = 0;
short var_19 = (short)6836;
unsigned long long int var_20 = 5207912604260270897ULL;
int var_21 = 1207650398;
unsigned long long int var_22 = 16480083666507480107ULL;
unsigned short var_23 = (unsigned short)4611;
unsigned char var_24 = (unsigned char)134;
unsigned int var_25 = 1294764217U;
long long int arr_2 [13] ;
int arr_4 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 594543529020172084LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = 1294103970;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
