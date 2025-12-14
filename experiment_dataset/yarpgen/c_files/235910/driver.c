#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3856973431U;
unsigned short var_5 = (unsigned short)14915;
signed char var_6 = (signed char)66;
unsigned short var_11 = (unsigned short)46697;
unsigned int var_13 = 2676118432U;
short var_14 = (short)8385;
short var_17 = (short)3729;
signed char var_18 = (signed char)-100;
int zero = 0;
short var_20 = (short)-28837;
short var_21 = (short)-8135;
unsigned int var_22 = 4249715613U;
signed char var_23 = (signed char)-118;
unsigned short var_24 = (unsigned short)44473;
signed char var_25 = (signed char)-104;
unsigned char arr_0 [11] [11] ;
int arr_1 [11] [11] ;
unsigned long long int arr_2 [11] ;
unsigned long long int arr_3 [11] [11] ;
short arr_4 [11] ;
short arr_6 [11] [11] ;
unsigned int arr_7 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)81;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = 854767882;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 17235171177725608156ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 11540468065820529908ULL : 1821348852716598865ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (short)25259;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-26687 : (short)-21274;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 683461678U : 1279391343U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
