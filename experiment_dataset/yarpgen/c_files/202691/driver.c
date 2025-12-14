#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12424913561325317068ULL;
unsigned short var_3 = (unsigned short)52104;
signed char var_7 = (signed char)-60;
int var_8 = 1148283272;
unsigned short var_12 = (unsigned short)28192;
unsigned long long int var_13 = 14565714407861970808ULL;
int var_14 = 2108949235;
short var_15 = (short)-403;
short var_19 = (short)31209;
int zero = 0;
int var_20 = 579162732;
signed char var_21 = (signed char)126;
int var_22 = -1567566736;
int var_23 = 261688910;
_Bool var_24 = (_Bool)0;
unsigned int var_25 = 943535737U;
unsigned long long int arr_2 [11] ;
unsigned long long int arr_5 [11] ;
signed char arr_6 [15] ;
unsigned long long int arr_10 [15] [15] [15] ;
short arr_11 [15] ;
unsigned short arr_12 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 7029487012658588730ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = 13618069343689166559ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (signed char)-104;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 6643600824239974674ULL : 13829111260233717568ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_11 [i_0] = (short)-7121;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)8465 : (unsigned short)64161;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
