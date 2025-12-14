#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2133428420;
unsigned long long int var_3 = 18013647774975826457ULL;
unsigned int var_4 = 2145668708U;
short var_5 = (short)30493;
signed char var_7 = (signed char)54;
unsigned short var_8 = (unsigned short)12031;
int zero = 0;
long long int var_11 = 2348844000825363696LL;
signed char var_12 = (signed char)-125;
int var_13 = 547593950;
unsigned long long int var_14 = 17249739713353923420ULL;
short var_15 = (short)-19808;
_Bool var_16 = (_Bool)1;
unsigned int arr_0 [13] [13] ;
unsigned char arr_1 [13] ;
short arr_7 [13] [13] ;
_Bool arr_2 [13] ;
signed char arr_8 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = 2185830502U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned char)90;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_7 [i_0] [i_1] = (short)-30270;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (signed char)-125 : (signed char)50;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
