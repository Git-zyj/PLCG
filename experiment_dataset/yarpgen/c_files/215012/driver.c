#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_5 = (short)16750;
signed char var_10 = (signed char)-83;
_Bool var_11 = (_Bool)1;
int zero = 0;
int var_16 = -1854908254;
unsigned int var_17 = 264044268U;
unsigned int var_18 = 3509988095U;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 3255365989U;
unsigned char var_21 = (unsigned char)136;
unsigned int arr_0 [10] ;
unsigned short arr_8 [24] ;
long long int arr_10 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 3320307641U : 1441693811U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (unsigned short)50548;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = 1276631437983914329LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
