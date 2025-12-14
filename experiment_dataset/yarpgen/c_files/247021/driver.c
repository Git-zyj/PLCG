#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)36346;
short var_1 = (short)30197;
unsigned int var_2 = 2429832924U;
signed char var_3 = (signed char)8;
unsigned char var_4 = (unsigned char)84;
long long int var_5 = -7245776294322700704LL;
unsigned char var_6 = (unsigned char)215;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)64;
int var_10 = 1400572749;
unsigned long long int var_11 = 12799464978398101857ULL;
int zero = 0;
long long int var_12 = 1766105013140822029LL;
unsigned short var_13 = (unsigned short)64429;
unsigned short var_14 = (unsigned short)52499;
unsigned char var_15 = (unsigned char)151;
unsigned char var_16 = (unsigned char)0;
_Bool var_17 = (_Bool)0;
long long int var_18 = -5047786875856507799LL;
_Bool var_19 = (_Bool)0;
short var_20 = (short)-20211;
unsigned short var_21 = (unsigned short)38391;
unsigned char var_22 = (unsigned char)204;
unsigned long long int var_23 = 17188142895360342655ULL;
unsigned short arr_11 [24] [24] [24] ;
unsigned short arr_24 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)63248 : (unsigned short)48381;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)52616 : (unsigned short)25247;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_24 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
