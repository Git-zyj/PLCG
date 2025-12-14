#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-2498;
unsigned short var_2 = (unsigned short)11146;
unsigned int var_3 = 1466498479U;
short var_4 = (short)23010;
signed char var_6 = (signed char)-51;
unsigned short var_9 = (unsigned short)47501;
int var_10 = 1500443288;
unsigned char var_14 = (unsigned char)64;
unsigned char var_15 = (unsigned char)167;
int zero = 0;
int var_16 = 751654138;
int var_17 = 353694011;
short var_18 = (short)-4518;
unsigned short var_19 = (unsigned short)23965;
short var_20 = (short)30283;
short arr_8 [23] ;
signed char arr_9 [23] [23] ;
int arr_10 [23] ;
unsigned short arr_14 [18] ;
_Bool arr_15 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (short)-6082;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)-67;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = -357322261;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_14 [i_0] = (unsigned short)14483;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_15 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
