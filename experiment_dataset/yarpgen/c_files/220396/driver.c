#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_2 = 2200494646U;
unsigned char var_3 = (unsigned char)63;
signed char var_5 = (signed char)-21;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 2843576945U;
unsigned int var_11 = 662673279U;
signed char var_12 = (signed char)-54;
int zero = 0;
unsigned int var_13 = 3218982479U;
unsigned int var_14 = 1483571405U;
unsigned char var_15 = (unsigned char)186;
unsigned int var_16 = 3654083829U;
unsigned int var_17 = 3427724558U;
unsigned int var_18 = 1727202393U;
_Bool arr_0 [12] ;
signed char arr_1 [12] ;
_Bool arr_2 [12] ;
_Bool arr_4 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (signed char)8;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
