#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)7416;
unsigned char var_1 = (unsigned char)184;
signed char var_2 = (signed char)-88;
unsigned char var_5 = (unsigned char)114;
signed char var_6 = (signed char)88;
signed char var_7 = (signed char)20;
unsigned short var_8 = (unsigned short)28935;
_Bool var_10 = (_Bool)0;
int var_13 = -1906942631;
short var_14 = (short)-19160;
unsigned short var_16 = (unsigned short)42597;
unsigned int var_18 = 3202322350U;
int zero = 0;
unsigned short var_19 = (unsigned short)6691;
int var_20 = -302393558;
short var_21 = (short)17894;
long long int var_22 = 1958912382377144712LL;
unsigned short var_23 = (unsigned short)38489;
unsigned int var_24 = 1877719055U;
signed char var_25 = (signed char)-33;
unsigned short var_26 = (unsigned short)15591;
int var_27 = -332900988;
short arr_2 [24] ;
unsigned short arr_10 [24] [24] [24] [24] [24] ;
_Bool arr_4 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (short)24306;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)25426;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
