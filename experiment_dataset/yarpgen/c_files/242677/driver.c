#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)64;
unsigned long long int var_6 = 1450013542228714807ULL;
unsigned char var_12 = (unsigned char)141;
unsigned char var_14 = (unsigned char)200;
short var_15 = (short)21182;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned int var_19 = 2069256920U;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)1;
signed char arr_1 [14] ;
unsigned short arr_2 [14] ;
unsigned char arr_4 [14] [14] ;
long long int arr_6 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)109 : (signed char)-49;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned short)6531;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)233;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? -7312061775657957813LL : -4700853131029080976LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
