#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-6625;
signed char var_2 = (signed char)59;
unsigned char var_3 = (unsigned char)129;
short var_5 = (short)-2983;
unsigned long long int var_6 = 13289078413691935604ULL;
_Bool var_7 = (_Bool)0;
signed char var_9 = (signed char)17;
unsigned char var_10 = (unsigned char)24;
short var_13 = (short)-7104;
unsigned long long int var_14 = 5403762005337982021ULL;
long long int var_16 = 8508583059264512377LL;
int zero = 0;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)24;
int var_19 = 1337263533;
signed char var_20 = (signed char)-44;
unsigned short var_21 = (unsigned short)64767;
unsigned char var_22 = (unsigned char)12;
_Bool var_23 = (_Bool)1;
unsigned long long int var_24 = 571218043737374685ULL;
long long int var_25 = -2020465151323194588LL;
_Bool arr_10 [16] ;
short arr_17 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_17 [i_0] [i_1] = (short)-28164;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
