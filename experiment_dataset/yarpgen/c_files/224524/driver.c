#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)4004;
unsigned long long int var_2 = 6002025825819713301ULL;
int var_3 = 1370823166;
_Bool var_5 = (_Bool)1;
int zero = 0;
unsigned int var_17 = 891235274U;
unsigned short var_18 = (unsigned short)17491;
unsigned short var_19 = (unsigned short)2561;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 1926241173U;
unsigned char var_22 = (unsigned char)75;
unsigned int var_23 = 1549103673U;
unsigned short var_24 = (unsigned short)56239;
unsigned short arr_0 [16] ;
unsigned int arr_3 [10] ;
int arr_8 [25] ;
_Bool arr_4 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned short)53158;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 1155505553U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = -1289535819;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
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
