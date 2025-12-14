#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)101;
signed char var_8 = (signed char)2;
_Bool var_10 = (_Bool)1;
unsigned char var_13 = (unsigned char)28;
unsigned char var_15 = (unsigned char)9;
_Bool var_19 = (_Bool)0;
int zero = 0;
short var_20 = (short)24102;
_Bool var_21 = (_Bool)0;
short var_22 = (short)24800;
signed char var_23 = (signed char)85;
unsigned char var_24 = (unsigned char)103;
_Bool var_25 = (_Bool)1;
unsigned int arr_0 [12] [12] ;
unsigned char arr_1 [12] ;
_Bool arr_2 [12] ;
_Bool arr_3 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = 508187947U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned char)201;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
