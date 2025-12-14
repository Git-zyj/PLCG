#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_4 = 8170057789235189528LL;
unsigned char var_6 = (unsigned char)233;
signed char var_7 = (signed char)90;
unsigned int var_8 = 1497778923U;
unsigned int var_10 = 3144765438U;
short var_11 = (short)-25771;
int zero = 0;
short var_13 = (short)-32226;
long long int var_14 = -5662016041565595210LL;
unsigned long long int var_15 = 11624504093730986955ULL;
unsigned int var_16 = 2572807057U;
unsigned long long int var_17 = 5197892188529849775ULL;
unsigned short var_18 = (unsigned short)38732;
signed char var_19 = (signed char)72;
unsigned long long int arr_2 [24] ;
unsigned int arr_7 [16] ;
unsigned short arr_11 [25] ;
signed char arr_12 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 14104748239832955704ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = 2163961993U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = (unsigned short)64836;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_12 [i_0] = (signed char)57;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
