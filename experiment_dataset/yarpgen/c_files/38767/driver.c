#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2800423050U;
long long int var_2 = 8087282004792022134LL;
short var_3 = (short)-16704;
int var_5 = 219930428;
_Bool var_7 = (_Bool)0;
short var_8 = (short)27411;
unsigned int var_9 = 4081794279U;
_Bool var_10 = (_Bool)1;
int zero = 0;
signed char var_13 = (signed char)-105;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 4194125515U;
unsigned int var_16 = 4061486526U;
unsigned char var_17 = (unsigned char)160;
unsigned int var_18 = 2069786187U;
unsigned char arr_0 [19] ;
unsigned int arr_1 [19] ;
unsigned int arr_4 [12] ;
long long int arr_2 [19] ;
unsigned int arr_5 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned char)160;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 3330519342U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = 2186986111U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = -1721835226461901914LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 50151798U : 328582879U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
