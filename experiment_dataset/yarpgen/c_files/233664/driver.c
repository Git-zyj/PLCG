#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_4 = (short)7717;
short var_5 = (short)-24686;
int var_6 = 1846676919;
int var_7 = -271219885;
unsigned char var_8 = (unsigned char)119;
unsigned long long int var_11 = 2150308488588730958ULL;
int var_14 = -1887397683;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned int var_16 = 4172650651U;
unsigned int var_17 = 2115860971U;
unsigned char var_18 = (unsigned char)220;
unsigned long long int var_19 = 14796784113289770574ULL;
unsigned short var_20 = (unsigned short)49421;
unsigned long long int var_21 = 13538244547944462579ULL;
signed char var_22 = (signed char)-10;
signed char arr_0 [17] ;
_Bool arr_2 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (signed char)-16;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
