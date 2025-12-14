#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -891796753;
long long int var_2 = 6782761008264570941LL;
unsigned long long int var_3 = 17963833119335643145ULL;
signed char var_6 = (signed char)117;
long long int var_11 = -2188686161439463331LL;
_Bool var_12 = (_Bool)0;
long long int var_13 = -5412223962961896149LL;
int var_14 = -313745982;
unsigned char var_15 = (unsigned char)153;
int zero = 0;
signed char var_16 = (signed char)25;
unsigned long long int var_17 = 17639998913434082770ULL;
short var_18 = (short)10527;
unsigned char arr_6 [23] ;
long long int arr_7 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (unsigned char)218;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = -7522841929546281637LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
