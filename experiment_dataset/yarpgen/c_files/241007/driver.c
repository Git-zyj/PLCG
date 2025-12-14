#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6549320444322150886LL;
int var_2 = -1269174939;
signed char var_6 = (signed char)-14;
unsigned char var_11 = (unsigned char)179;
int zero = 0;
unsigned char var_14 = (unsigned char)85;
long long int var_15 = 2457120691833664932LL;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)8197;
unsigned char arr_0 [13] ;
_Bool arr_1 [13] ;
unsigned int arr_2 [13] ;
long long int arr_3 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned char)32;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 148020847U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = -4223961620985183886LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
