#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)22712;
int var_2 = -1864681007;
_Bool var_3 = (_Bool)1;
unsigned short var_5 = (unsigned short)32525;
unsigned char var_6 = (unsigned char)84;
signed char var_7 = (signed char)62;
signed char var_8 = (signed char)-23;
unsigned char var_9 = (unsigned char)17;
short var_10 = (short)-5358;
int var_11 = -683554678;
signed char var_13 = (signed char)124;
int zero = 0;
short var_14 = (short)-13189;
short var_15 = (short)-22124;
short var_16 = (short)22773;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)47;
unsigned char var_19 = (unsigned char)187;
unsigned short arr_0 [25] [25] ;
long long int arr_1 [25] ;
unsigned short arr_2 [25] ;
signed char arr_3 [25] [25] [25] ;
unsigned int arr_4 [25] [25] ;
unsigned short arr_5 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)19697 : (unsigned short)64790;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 8244792350815549835LL : 6014685027513914814LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned short)16177;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)-122;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 3260890153U : 481526284U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)33901 : (unsigned short)2579;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
