#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4008186242343214068LL;
short var_1 = (short)1411;
unsigned short var_2 = (unsigned short)15864;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 3109584634U;
short var_6 = (short)-30941;
unsigned int var_11 = 2669030074U;
long long int var_12 = -4238591225746178220LL;
signed char var_15 = (signed char)65;
int var_16 = 1316948298;
int zero = 0;
unsigned int var_19 = 2044423653U;
unsigned short var_20 = (unsigned short)2825;
unsigned long long int var_21 = 13084492381603314660ULL;
unsigned short var_22 = (unsigned short)49585;
unsigned char var_23 = (unsigned char)138;
unsigned char arr_2 [18] ;
unsigned long long int arr_5 [18] [18] [18] ;
unsigned char arr_7 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned char)51;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 9101359307681334924ULL : 12630122174660578358ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)235 : (unsigned char)55;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
