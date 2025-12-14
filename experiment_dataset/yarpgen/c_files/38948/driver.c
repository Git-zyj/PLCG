#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6617795772884644933ULL;
unsigned char var_1 = (unsigned char)20;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)99;
unsigned char var_5 = (unsigned char)164;
unsigned long long int var_6 = 17332627853319794002ULL;
signed char var_7 = (signed char)-9;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)36310;
short var_10 = (short)9776;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)31639;
int zero = 0;
signed char var_14 = (signed char)-94;
unsigned short var_15 = (unsigned short)23265;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 8972038644734242181ULL;
unsigned long long int var_18 = 12432540713214853198ULL;
unsigned char var_19 = (unsigned char)64;
short var_20 = (short)-19214;
unsigned int var_21 = 3361692234U;
unsigned char arr_0 [12] ;
unsigned short arr_4 [13] ;
unsigned int arr_5 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (unsigned char)88;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (unsigned short)12586;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = 3082502812U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
