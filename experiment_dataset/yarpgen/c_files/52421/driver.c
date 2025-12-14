#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)22;
_Bool var_1 = (_Bool)1;
unsigned int var_2 = 3073637209U;
_Bool var_4 = (_Bool)0;
int var_5 = -1711816813;
unsigned int var_7 = 507850741U;
short var_18 = (short)-32620;
int zero = 0;
_Bool var_20 = (_Bool)0;
int var_21 = 1517609269;
int var_22 = -773852530;
unsigned char var_23 = (unsigned char)24;
short var_24 = (short)-28522;
unsigned int arr_1 [18] ;
unsigned long long int arr_5 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 3577708613U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = 3882318888449275988ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
