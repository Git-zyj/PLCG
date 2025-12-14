#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3287922301U;
unsigned short var_1 = (unsigned short)47354;
unsigned char var_3 = (unsigned char)250;
unsigned int var_5 = 109702071U;
unsigned char var_7 = (unsigned char)236;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)29042;
long long int var_13 = -2334862383858861904LL;
int zero = 0;
unsigned short var_15 = (unsigned short)63454;
signed char var_16 = (signed char)96;
short var_17 = (short)28098;
long long int var_18 = 3975728582248536582LL;
int var_19 = -2025182889;
unsigned long long int var_20 = 1458977390825837374ULL;
unsigned int var_21 = 48765171U;
unsigned int arr_1 [13] ;
unsigned short arr_6 [21] [21] ;
unsigned int arr_4 [13] ;
unsigned char arr_8 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 334703981U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)24109;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = 900419084U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned char)37;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
