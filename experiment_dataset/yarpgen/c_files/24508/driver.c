#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3413806792U;
short var_2 = (short)-4128;
signed char var_3 = (signed char)118;
long long int var_5 = -4444646786786900412LL;
int var_8 = 908730947;
unsigned int var_10 = 372251211U;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 10796719057145571039ULL;
unsigned int var_13 = 3808541772U;
unsigned char var_14 = (unsigned char)151;
unsigned int arr_0 [13] ;
unsigned int arr_1 [13] ;
signed char arr_2 [13] ;
unsigned int arr_4 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 623759654U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 3535719503U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (signed char)106;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = 2803223605U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
