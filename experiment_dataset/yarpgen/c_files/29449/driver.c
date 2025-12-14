#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)17121;
unsigned int var_3 = 3005007069U;
unsigned int var_8 = 1641068168U;
unsigned char var_14 = (unsigned char)126;
int zero = 0;
short var_17 = (short)12264;
long long int var_18 = 1477977052308158287LL;
unsigned char var_19 = (unsigned char)92;
unsigned char var_20 = (unsigned char)95;
unsigned short var_21 = (unsigned short)28832;
unsigned int var_22 = 2812497090U;
unsigned int var_23 = 2053811029U;
unsigned int arr_3 [25] [25] ;
signed char arr_5 [25] ;
unsigned short arr_6 [25] ;
unsigned int arr_8 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = 1000106856U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (signed char)-117;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (unsigned short)11477;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = 803441275U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
