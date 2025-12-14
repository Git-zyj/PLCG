#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-8367;
unsigned char var_2 = (unsigned char)221;
unsigned short var_3 = (unsigned short)21940;
unsigned char var_5 = (unsigned char)150;
long long int var_7 = -2556408825356958923LL;
unsigned char var_9 = (unsigned char)54;
short var_12 = (short)-19978;
unsigned short var_14 = (unsigned short)5461;
int zero = 0;
unsigned int var_15 = 2913202673U;
long long int var_16 = -4345710479488906116LL;
short var_17 = (short)5667;
signed char var_18 = (signed char)81;
unsigned char var_19 = (unsigned char)162;
unsigned int var_20 = 2743268843U;
unsigned char var_21 = (unsigned char)190;
short var_22 = (short)-14705;
signed char var_23 = (signed char)24;
unsigned short var_24 = (unsigned short)34223;
long long int var_25 = 8649283811624771795LL;
int var_26 = 243816731;
int var_27 = 2041892969;
long long int var_28 = -1913982269379986496LL;
long long int var_29 = -3396083011986577742LL;
int arr_0 [16] ;
signed char arr_1 [16] ;
unsigned short arr_4 [17] ;
short arr_5 [23] [23] ;
unsigned short arr_6 [23] ;
signed char arr_8 [23] [23] ;
unsigned short arr_9 [23] ;
unsigned char arr_14 [23] [23] [23] [23] [23] [23] ;
long long int arr_15 [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 1698980808;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (signed char)-59;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (unsigned short)5780;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-65;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (unsigned short)18838;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = (unsigned short)4763;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)51;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? -2266168750122587521LL : -4898384228897848383LL;
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
