#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25250;
int var_1 = 2039208443;
short var_4 = (short)-15528;
unsigned short var_6 = (unsigned short)43552;
unsigned char var_7 = (unsigned char)165;
int var_8 = -1537113700;
signed char var_10 = (signed char)-56;
int zero = 0;
unsigned short var_11 = (unsigned short)23962;
int var_12 = 519739884;
unsigned short var_13 = (unsigned short)44532;
unsigned short var_14 = (unsigned short)46315;
_Bool arr_1 [13] ;
_Bool arr_3 [13] ;
_Bool arr_4 [13] [13] ;
int arr_5 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = -1259063571;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
