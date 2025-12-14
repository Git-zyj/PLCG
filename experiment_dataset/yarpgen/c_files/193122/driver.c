#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30487;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)12783;
unsigned short var_11 = (unsigned short)21234;
unsigned long long int var_12 = 5741828673768249600ULL;
int zero = 0;
short var_15 = (short)25393;
signed char var_16 = (signed char)-31;
unsigned int var_17 = 3024668972U;
signed char var_18 = (signed char)120;
unsigned int var_19 = 2960067884U;
unsigned char var_20 = (unsigned char)179;
unsigned short var_21 = (unsigned short)8598;
_Bool var_22 = (_Bool)1;
unsigned int var_23 = 4066252314U;
_Bool arr_7 [15] ;
unsigned char arr_8 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (unsigned char)197;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
