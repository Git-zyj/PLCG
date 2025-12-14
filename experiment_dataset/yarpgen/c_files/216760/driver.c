#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)66;
unsigned char var_7 = (unsigned char)176;
unsigned int var_8 = 3062311210U;
short var_10 = (short)-12796;
_Bool var_11 = (_Bool)0;
unsigned long long int var_16 = 12801110912696116695ULL;
int zero = 0;
unsigned long long int var_20 = 7446936353944704699ULL;
unsigned int var_21 = 983849074U;
unsigned int var_22 = 1566554885U;
int var_23 = 255415615;
int var_24 = -1264534532;
unsigned char var_25 = (unsigned char)12;
unsigned long long int var_26 = 8824753006470881193ULL;
signed char var_27 = (signed char)42;
short arr_1 [25] [25] ;
unsigned int arr_5 [13] [13] [13] ;
unsigned short arr_8 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (short)21838;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 2650172637U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)18154;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
