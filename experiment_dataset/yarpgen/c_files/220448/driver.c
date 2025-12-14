#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)62874;
int var_1 = -660555223;
signed char var_2 = (signed char)41;
short var_5 = (short)4770;
unsigned char var_6 = (unsigned char)230;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)1;
int zero = 0;
signed char var_10 = (signed char)23;
signed char var_11 = (signed char)-16;
short var_12 = (short)-22641;
short var_13 = (short)-3122;
unsigned char var_14 = (unsigned char)29;
unsigned short var_15 = (unsigned short)49208;
int var_16 = 1114257551;
_Bool arr_0 [13] ;
unsigned char arr_1 [13] ;
unsigned short arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned char)230;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (unsigned short)42759;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
