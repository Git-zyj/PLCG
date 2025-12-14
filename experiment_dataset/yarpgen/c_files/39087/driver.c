#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15042;
signed char var_1 = (signed char)-59;
_Bool var_4 = (_Bool)1;
int var_5 = -139636819;
unsigned int var_7 = 4180328990U;
long long int var_8 = 3064987710496321693LL;
signed char var_9 = (signed char)-5;
long long int var_10 = 6844113408124638998LL;
int zero = 0;
long long int var_11 = -4680711973651792611LL;
long long int var_12 = 5861831952253454278LL;
unsigned int var_13 = 1108133013U;
unsigned int var_14 = 3913302258U;
unsigned int var_15 = 322496230U;
unsigned int var_16 = 1736344198U;
short var_17 = (short)16786;
short var_18 = (short)-11346;
int arr_3 [21] ;
unsigned char arr_5 [21] ;
_Bool arr_7 [19] ;
signed char arr_8 [19] ;
unsigned int arr_2 [12] ;
unsigned int arr_6 [21] [21] ;
unsigned long long int arr_10 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 1553810179;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (unsigned char)17;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = (signed char)67;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 4249662950U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = 100106034U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = 11090723190790775226ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
