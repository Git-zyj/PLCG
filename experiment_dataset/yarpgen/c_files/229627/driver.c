#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)42;
int var_4 = -809274766;
unsigned short var_5 = (unsigned short)31369;
int var_6 = 1805133714;
short var_7 = (short)817;
long long int var_8 = -1136556050221918848LL;
unsigned short var_10 = (unsigned short)47035;
int var_11 = -989043898;
unsigned char var_12 = (unsigned char)164;
short var_13 = (short)-6614;
int zero = 0;
short var_14 = (short)-20297;
int var_15 = -1788816841;
signed char var_16 = (signed char)9;
int var_17 = -377649607;
unsigned char var_18 = (unsigned char)77;
int arr_3 [17] ;
long long int arr_5 [17] [17] ;
_Bool arr_2 [16] ;
unsigned int arr_7 [17] ;
long long int arr_8 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 1477111089;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = -7847554963472556137LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = 10424017U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = -4383478866363523183LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
