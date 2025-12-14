#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)255;
unsigned short var_1 = (unsigned short)12789;
short var_3 = (short)-5217;
int var_4 = -917128422;
unsigned char var_6 = (unsigned char)160;
long long int var_9 = 6594807238314466393LL;
unsigned char var_11 = (unsigned char)60;
short var_14 = (short)27409;
unsigned char var_15 = (unsigned char)250;
signed char var_17 = (signed char)29;
short var_18 = (short)28570;
short var_19 = (short)-1515;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 12278822926456131195ULL;
unsigned short var_22 = (unsigned short)12133;
unsigned char var_23 = (unsigned char)118;
_Bool var_24 = (_Bool)1;
long long int arr_4 [16] [16] ;
unsigned short arr_5 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = 9177293687022797975LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)63738;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
