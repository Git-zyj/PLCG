#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3056332074105550596LL;
unsigned int var_1 = 1062243425U;
unsigned int var_2 = 2782986666U;
_Bool var_3 = (_Bool)0;
short var_4 = (short)31778;
unsigned int var_5 = 31244076U;
_Bool var_6 = (_Bool)0;
short var_8 = (short)7797;
unsigned int var_9 = 3530480591U;
long long int var_10 = 422295546148238729LL;
unsigned long long int var_11 = 13154124092902155628ULL;
int zero = 0;
short var_12 = (short)-25506;
int var_13 = -854947997;
long long int var_14 = -3869868226364455726LL;
short var_15 = (short)7237;
unsigned int arr_0 [11] ;
_Bool arr_1 [11] ;
_Bool arr_3 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 3828350904U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
