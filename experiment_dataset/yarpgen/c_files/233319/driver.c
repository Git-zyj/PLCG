#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)47404;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)82;
unsigned long long int var_8 = 12888410862198420924ULL;
unsigned short var_9 = (unsigned short)13919;
unsigned long long int var_10 = 9087674938728215791ULL;
int var_11 = 1405126970;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned short var_15 = (unsigned short)5081;
unsigned long long int var_16 = 2532271957296233762ULL;
signed char var_17 = (signed char)46;
unsigned int var_18 = 3469524639U;
unsigned char var_19 = (unsigned char)29;
unsigned int var_20 = 457308421U;
unsigned int var_21 = 1322193623U;
unsigned int var_22 = 1519367229U;
_Bool var_23 = (_Bool)0;
signed char var_24 = (signed char)-69;
long long int var_25 = -5237422882314054163LL;
_Bool arr_0 [18] ;
signed char arr_1 [18] [18] ;
int arr_2 [18] ;
short arr_4 [13] ;
unsigned char arr_5 [13] [13] ;
signed char arr_8 [13] [13] [13] ;
short arr_9 [13] [13] ;
signed char arr_11 [13] ;
unsigned long long int arr_13 [13] [13] ;
unsigned short arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-87;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = -32331635;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (short)28506;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)114;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (signed char)73;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_9 [i_0] [i_1] = (short)17577;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_11 [i_0] = (signed char)90;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_13 [i_0] [i_1] = 9749688746350255488ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (unsigned short)5326;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
