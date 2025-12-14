#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)161;
unsigned char var_3 = (unsigned char)168;
unsigned short var_7 = (unsigned short)63641;
short var_8 = (short)-30915;
signed char var_12 = (signed char)-95;
int var_13 = -516105450;
unsigned short var_16 = (unsigned short)8566;
int var_17 = -165716277;
int zero = 0;
long long int var_18 = -1710537009344233063LL;
unsigned long long int var_19 = 16007293130111621154ULL;
unsigned int var_20 = 3679889185U;
_Bool var_21 = (_Bool)1;
int var_22 = -724069306;
unsigned char arr_0 [23] ;
short arr_2 [23] ;
short arr_4 [23] ;
long long int arr_5 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)1 : (unsigned char)201;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (short)12485;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)16829 : (short)5180;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 2322632745493201158LL : -564441495595870509LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
