#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)14859;
int var_7 = -599484022;
signed char var_10 = (signed char)-113;
unsigned short var_11 = (unsigned short)26339;
_Bool var_14 = (_Bool)0;
short var_16 = (short)4080;
int zero = 0;
unsigned int var_19 = 2720103253U;
unsigned char var_20 = (unsigned char)75;
int var_21 = -405603677;
unsigned short var_22 = (unsigned short)3119;
short var_23 = (short)31193;
long long int var_24 = -6698814904110369363LL;
_Bool arr_4 [15] [15] ;
short arr_8 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)-29383 : (short)8043;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
