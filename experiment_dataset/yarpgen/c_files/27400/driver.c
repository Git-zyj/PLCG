#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)86;
int var_2 = 1179784613;
unsigned char var_5 = (unsigned char)35;
unsigned char var_7 = (unsigned char)72;
long long int var_8 = -831492255243567645LL;
unsigned char var_10 = (unsigned char)113;
_Bool var_11 = (_Bool)0;
unsigned short var_14 = (unsigned short)45821;
int zero = 0;
unsigned long long int var_18 = 4937696621537464524ULL;
unsigned char var_19 = (unsigned char)245;
int var_20 = 877453878;
signed char var_21 = (signed char)-52;
_Bool var_22 = (_Bool)1;
signed char var_23 = (signed char)-21;
int var_24 = 847855779;
_Bool var_25 = (_Bool)0;
short var_26 = (short)-25700;
unsigned char var_27 = (unsigned char)232;
signed char var_28 = (signed char)-22;
unsigned short var_29 = (unsigned short)30659;
unsigned char var_30 = (unsigned char)81;
_Bool arr_12 [20] ;
_Bool arr_29 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_29 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_29 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
