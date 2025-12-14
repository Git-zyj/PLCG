#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2012718976;
unsigned long long int var_2 = 7566544761078893513ULL;
unsigned long long int var_3 = 6815335023261626016ULL;
unsigned char var_7 = (unsigned char)60;
unsigned short var_8 = (unsigned short)19941;
signed char var_10 = (signed char)-7;
signed char var_11 = (signed char)-104;
_Bool var_14 = (_Bool)0;
int var_16 = -245521642;
int zero = 0;
unsigned char var_17 = (unsigned char)111;
_Bool var_18 = (_Bool)1;
int var_19 = 1401361686;
unsigned short var_20 = (unsigned short)23440;
int var_21 = -965266303;
long long int var_22 = 142372433153870302LL;
signed char var_23 = (signed char)5;
short arr_1 [24] ;
int arr_5 [24] ;
unsigned char arr_8 [24] ;
unsigned int arr_23 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (short)15759;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -260264924 : -957619969;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned char)112 : (unsigned char)253;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = 3096000022U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_23 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
