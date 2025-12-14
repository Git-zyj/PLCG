#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)34;
int var_5 = -480303293;
_Bool var_6 = (_Bool)0;
unsigned short var_10 = (unsigned short)7421;
unsigned short var_14 = (unsigned short)28930;
int var_16 = 1733405386;
short var_17 = (short)-10300;
int zero = 0;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)-97;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)0;
short var_22 = (short)6968;
int var_23 = 693472479;
short var_24 = (short)1072;
unsigned char var_25 = (unsigned char)242;
unsigned int var_26 = 2082909795U;
signed char arr_0 [15] ;
int arr_1 [15] ;
_Bool arr_3 [15] ;
unsigned char arr_8 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (signed char)74;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = -1019091497;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)224 : (unsigned char)239;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
