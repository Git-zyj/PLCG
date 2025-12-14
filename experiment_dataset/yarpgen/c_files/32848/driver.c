#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 16211916581621629684ULL;
_Bool var_2 = (_Bool)0;
long long int var_4 = 1064391515176418727LL;
long long int var_5 = 2210082738806638216LL;
int var_6 = 1573799243;
int var_7 = 859012456;
unsigned long long int var_9 = 9909403565052599422ULL;
signed char var_10 = (signed char)45;
unsigned char var_11 = (unsigned char)42;
short var_12 = (short)-17529;
unsigned char var_15 = (unsigned char)182;
unsigned char var_16 = (unsigned char)111;
int zero = 0;
unsigned char var_18 = (unsigned char)215;
unsigned char var_19 = (unsigned char)205;
unsigned char var_20 = (unsigned char)242;
unsigned char var_21 = (unsigned char)6;
_Bool var_22 = (_Bool)0;
short arr_8 [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (short)31519 : (short)12905;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_8 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
