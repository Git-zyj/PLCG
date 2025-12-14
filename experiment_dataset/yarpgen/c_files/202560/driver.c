#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7976048367754989970LL;
_Bool var_4 = (_Bool)0;
unsigned long long int var_8 = 14226774157840868878ULL;
short var_9 = (short)30160;
unsigned char var_10 = (unsigned char)251;
unsigned char var_11 = (unsigned char)6;
int zero = 0;
long long int var_14 = 1346576793537645960LL;
unsigned int var_15 = 1315232881U;
short var_16 = (short)24488;
unsigned char var_17 = (unsigned char)252;
long long int arr_2 [16] ;
unsigned int arr_3 [16] ;
signed char arr_6 [16] ;
unsigned int arr_7 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = -4848368161348020874LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 2121456225U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (signed char)113;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = 3370822230U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
