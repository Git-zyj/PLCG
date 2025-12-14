#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16207578130330550759ULL;
unsigned char var_1 = (unsigned char)158;
unsigned int var_2 = 436166685U;
unsigned int var_3 = 2749315501U;
unsigned int var_4 = 407876294U;
unsigned char var_5 = (unsigned char)34;
unsigned short var_8 = (unsigned short)18485;
unsigned char var_11 = (unsigned char)99;
unsigned int var_12 = 419489280U;
short var_16 = (short)2368;
int zero = 0;
unsigned char var_18 = (unsigned char)242;
long long int var_19 = -6190138561213230397LL;
unsigned char var_20 = (unsigned char)233;
_Bool var_21 = (_Bool)0;
short var_22 = (short)-20654;
short var_23 = (short)-485;
long long int var_24 = -1070410365716674994LL;
unsigned short var_25 = (unsigned short)55046;
unsigned short arr_0 [22] ;
short arr_2 [22] ;
short arr_5 [17] ;
short arr_3 [22] ;
long long int arr_6 [17] ;
long long int arr_11 [17] ;
unsigned short arr_12 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned short)56978;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (short)-28278;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (short)-12348;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (short)4926;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = 1549661096039514959LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_11 [i_0] = 3696086824503726498LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_12 [i_0] = (unsigned short)40606;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
