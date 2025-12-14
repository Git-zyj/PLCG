#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-3165;
unsigned char var_4 = (unsigned char)226;
unsigned short var_5 = (unsigned short)53527;
short var_7 = (short)-2413;
unsigned int var_8 = 677644595U;
unsigned char var_9 = (unsigned char)69;
unsigned short var_10 = (unsigned short)14673;
long long int var_11 = 7081697604346465933LL;
long long int var_13 = 6156321694116631132LL;
int zero = 0;
unsigned char var_14 = (unsigned char)153;
unsigned int var_15 = 2553576415U;
int var_16 = 781009017;
unsigned long long int var_17 = 2205721029997257501ULL;
long long int var_18 = -5546149490638906663LL;
_Bool var_19 = (_Bool)0;
unsigned char arr_0 [14] ;
int arr_4 [14] ;
unsigned char arr_5 [14] [14] [14] ;
unsigned short arr_3 [14] ;
unsigned char arr_7 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned char)139;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = 393002925;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)23;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (unsigned short)8834;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (unsigned char)54;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
