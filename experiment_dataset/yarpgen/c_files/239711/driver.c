#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 18213630576221527352ULL;
unsigned int var_3 = 2998921846U;
unsigned long long int var_6 = 12482316513478873086ULL;
short var_7 = (short)21047;
unsigned long long int var_11 = 16594979348875924524ULL;
unsigned char var_12 = (unsigned char)164;
int zero = 0;
short var_15 = (short)6244;
short var_16 = (short)-22593;
short var_17 = (short)-545;
long long int var_18 = 4375694281281281174LL;
short var_19 = (short)14771;
unsigned int var_20 = 2054689519U;
_Bool var_21 = (_Bool)0;
_Bool arr_0 [15] ;
unsigned int arr_1 [15] ;
short arr_3 [22] ;
_Bool arr_4 [22] ;
_Bool arr_6 [22] ;
_Bool arr_2 [15] [15] ;
unsigned int arr_7 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 1138956520U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (short)29958;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 3234496604U : 1203826442U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
