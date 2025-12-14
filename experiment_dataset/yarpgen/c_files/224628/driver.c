#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_2 = 3869435589881285355ULL;
unsigned long long int var_3 = 6651516111397393197ULL;
unsigned short var_4 = (unsigned short)5826;
unsigned char var_5 = (unsigned char)172;
unsigned long long int var_6 = 18257168202446660916ULL;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)95;
signed char var_9 = (signed char)2;
_Bool var_10 = (_Bool)1;
int zero = 0;
long long int var_11 = -5329362348244486506LL;
unsigned short var_12 = (unsigned short)12383;
int var_13 = -2100584669;
_Bool arr_1 [21] ;
unsigned char arr_2 [21] ;
unsigned int arr_3 [21] [21] ;
unsigned int arr_4 [21] ;
int arr_5 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned char)61;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = 2217690703U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 877996234U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = -110683452;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
