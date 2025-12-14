#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-32;
_Bool var_3 = (_Bool)0;
long long int var_4 = -6626151689536115750LL;
unsigned int var_6 = 201395787U;
short var_7 = (short)14131;
long long int var_8 = 8424563454174529983LL;
signed char var_12 = (signed char)-92;
int zero = 0;
long long int var_13 = -3272477829529225109LL;
unsigned long long int var_14 = 6232060735468250686ULL;
_Bool var_15 = (_Bool)0;
long long int var_16 = -8268616273517741169LL;
unsigned char var_17 = (unsigned char)143;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 451539431U;
_Bool arr_2 [25] ;
_Bool arr_3 [25] ;
unsigned short arr_4 [25] ;
int arr_13 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (unsigned short)3789;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_13 [i_0] = 275163935;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
