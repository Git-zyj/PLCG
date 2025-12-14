#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1418671607;
signed char var_1 = (signed char)-51;
unsigned int var_5 = 1282682251U;
unsigned int var_8 = 61273406U;
unsigned short var_9 = (unsigned short)64554;
unsigned short var_10 = (unsigned short)5824;
unsigned char var_12 = (unsigned char)243;
long long int var_13 = -242093242258462008LL;
unsigned int var_14 = 3957950535U;
int var_15 = -2107522495;
short var_16 = (short)-7406;
long long int var_17 = -2493265018038400989LL;
_Bool var_18 = (_Bool)0;
int zero = 0;
long long int var_20 = -3935985914686457165LL;
unsigned char var_21 = (unsigned char)235;
int var_22 = -419529369;
int var_23 = -1844771831;
signed char arr_0 [22] ;
long long int arr_1 [22] [22] ;
unsigned long long int arr_2 [22] ;
unsigned long long int arr_3 [22] [22] ;
short arr_4 [22] [22] ;
unsigned int arr_7 [21] ;
long long int arr_8 [21] ;
unsigned long long int arr_9 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (signed char)-32;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = -6950000552358963697LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 12776458391215483202ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = 12700419504190309380ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-19150;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = 3307373270U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = 3018260216474807098LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_9 [i_0] [i_1] = 3776795825096955545ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
