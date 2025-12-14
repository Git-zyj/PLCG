#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)33;
_Bool var_5 = (_Bool)0;
unsigned char var_7 = (unsigned char)49;
unsigned int var_11 = 4165492139U;
unsigned long long int var_12 = 3667816124746368258ULL;
unsigned long long int var_13 = 7185207639968954045ULL;
unsigned long long int var_16 = 11500046903040604015ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)123;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)178;
unsigned int var_20 = 2317119018U;
unsigned int var_21 = 2407911287U;
unsigned char var_22 = (unsigned char)51;
unsigned long long int var_23 = 12665673699370847837ULL;
unsigned int arr_9 [25] ;
signed char arr_6 [19] ;
unsigned char arr_15 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = 3000575275U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (signed char)-108;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_15 [i_0] = (unsigned char)44;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
