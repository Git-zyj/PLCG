#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)11;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)14;
short var_4 = (short)-11163;
short var_5 = (short)30629;
unsigned char var_6 = (unsigned char)206;
long long int var_8 = 2075958161922201549LL;
int var_10 = 1203934644;
short var_11 = (short)2946;
unsigned short var_12 = (unsigned short)4512;
int zero = 0;
signed char var_13 = (signed char)64;
long long int var_14 = 1316109036271220218LL;
unsigned int var_15 = 3157065872U;
long long int var_16 = -132524840749103693LL;
unsigned char arr_7 [25] [25] ;
long long int arr_8 [25] ;
unsigned long long int arr_9 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)147;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = 1214030433136598044LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = 2698315269579308195ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
