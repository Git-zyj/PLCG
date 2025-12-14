#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29824;
short var_1 = (short)16185;
short var_2 = (short)-2771;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 16242788227499559174ULL;
short var_5 = (short)31564;
unsigned char var_7 = (unsigned char)254;
int var_8 = 787141646;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)97;
unsigned short var_11 = (unsigned short)31313;
unsigned short var_12 = (unsigned short)9404;
int zero = 0;
short var_13 = (short)-5666;
int var_14 = 655070862;
unsigned char var_15 = (unsigned char)71;
short var_16 = (short)14452;
short var_17 = (short)15740;
short var_18 = (short)8049;
unsigned char arr_0 [22] [22] ;
short arr_1 [22] [22] ;
signed char arr_4 [14] ;
signed char arr_2 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)244;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (short)11562;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (signed char)71;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (signed char)-5;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
