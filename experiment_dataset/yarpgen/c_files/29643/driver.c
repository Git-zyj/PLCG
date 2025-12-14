#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 321035174U;
short var_1 = (short)-27590;
unsigned long long int var_2 = 13655937520010227733ULL;
short var_3 = (short)-6985;
signed char var_5 = (signed char)114;
signed char var_6 = (signed char)-43;
signed char var_7 = (signed char)43;
unsigned char var_8 = (unsigned char)41;
int zero = 0;
unsigned int var_10 = 41663570U;
unsigned short var_11 = (unsigned short)16055;
signed char var_12 = (signed char)-126;
short var_13 = (short)-32530;
int var_14 = 1809096944;
short var_15 = (short)-28462;
long long int var_16 = 6156360577631871117LL;
_Bool var_17 = (_Bool)1;
short arr_8 [25] [25] ;
short arr_9 [25] ;
int arr_10 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_8 [i_0] [i_1] = (short)-25630;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = (short)6686;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = 1313735675;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
