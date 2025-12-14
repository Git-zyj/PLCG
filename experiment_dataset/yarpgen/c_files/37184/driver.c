#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-8;
short var_5 = (short)12728;
unsigned int var_6 = 4201523292U;
unsigned short var_7 = (unsigned short)5752;
unsigned int var_9 = 2001762618U;
signed char var_10 = (signed char)94;
unsigned int var_15 = 488411691U;
int zero = 0;
unsigned short var_17 = (unsigned short)26469;
unsigned int var_18 = 967670201U;
unsigned long long int var_19 = 2436651829351894985ULL;
unsigned char var_20 = (unsigned char)29;
signed char var_21 = (signed char)-40;
unsigned char arr_0 [13] ;
unsigned short arr_1 [13] [13] ;
unsigned short arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)220 : (unsigned char)33;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)4269;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)42045 : (unsigned short)41065;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
