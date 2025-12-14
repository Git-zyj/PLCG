#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
long long int var_7 = -8152593143897344065LL;
short var_9 = (short)30037;
_Bool var_12 = (_Bool)0;
int zero = 0;
_Bool var_13 = (_Bool)0;
short var_14 = (short)-32173;
unsigned char var_15 = (unsigned char)151;
unsigned int var_16 = 2432939861U;
unsigned int arr_0 [15] [15] ;
unsigned char arr_2 [15] ;
signed char arr_3 [15] ;
short arr_4 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = 2855282608U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned char)164;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (signed char)52;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-29646;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
