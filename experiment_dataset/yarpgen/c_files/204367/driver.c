#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-16805;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 826817189U;
unsigned char var_6 = (unsigned char)28;
short var_8 = (short)15943;
unsigned int var_9 = 2626248083U;
signed char var_13 = (signed char)-109;
int zero = 0;
short var_15 = (short)-14462;
unsigned char var_16 = (unsigned char)148;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)187;
unsigned char var_19 = (unsigned char)96;
signed char var_20 = (signed char)-4;
unsigned int var_21 = 554502179U;
_Bool var_22 = (_Bool)1;
_Bool arr_0 [25] ;
unsigned char arr_1 [25] ;
short arr_2 [25] ;
short arr_6 [25] [25] [25] ;
unsigned char arr_4 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned char)45;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (short)-5576;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (short)-4203;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)217;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
