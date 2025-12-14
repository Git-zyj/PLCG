#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1900373347U;
unsigned int var_2 = 671168194U;
unsigned short var_3 = (unsigned short)57733;
unsigned char var_5 = (unsigned char)151;
signed char var_8 = (signed char)-18;
signed char var_9 = (signed char)-51;
signed char var_10 = (signed char)21;
signed char var_11 = (signed char)115;
unsigned int var_13 = 505656244U;
int zero = 0;
signed char var_14 = (signed char)-32;
unsigned int var_15 = 3934848479U;
unsigned int var_16 = 3014128827U;
unsigned int var_17 = 1288936597U;
unsigned short var_18 = (unsigned short)64744;
unsigned int var_19 = 2221813115U;
_Bool var_20 = (_Bool)1;
unsigned short arr_4 [15] [15] [15] ;
signed char arr_12 [15] [15] ;
_Bool arr_13 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)47977;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-21 : (signed char)23;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
