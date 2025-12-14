#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)231;
_Bool var_2 = (_Bool)0;
int var_3 = -592672118;
_Bool var_4 = (_Bool)0;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 3795275807619509898ULL;
signed char var_9 = (signed char)1;
unsigned long long int var_10 = 12971938138856220830ULL;
int zero = 0;
short var_12 = (short)-7189;
unsigned long long int var_13 = 6887427034243015056ULL;
_Bool var_14 = (_Bool)0;
int var_15 = -458992274;
int var_16 = 449018276;
unsigned char var_17 = (unsigned char)111;
unsigned char arr_0 [18] ;
unsigned char arr_1 [18] [18] ;
_Bool arr_2 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned char)144;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)197;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
