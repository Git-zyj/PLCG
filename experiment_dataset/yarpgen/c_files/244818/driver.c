#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3538;
short var_2 = (short)-9064;
short var_3 = (short)-22664;
short var_4 = (short)-3073;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)1;
int var_10 = 864764398;
long long int var_13 = 7201120692280992664LL;
unsigned int var_14 = 2080724409U;
int zero = 0;
unsigned int var_16 = 1911327707U;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)0;
_Bool var_19 = (_Bool)0;
_Bool arr_1 [12] ;
_Bool arr_2 [12] ;
unsigned short arr_6 [19] ;
long long int arr_7 [19] ;
long long int arr_3 [12] ;
short arr_4 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (unsigned short)65206;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = 3455805312296461214LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = -639586682177566048LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (short)10144;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
