#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 265453750;
int var_3 = 1949220562;
unsigned char var_6 = (unsigned char)111;
unsigned short var_7 = (unsigned short)61498;
int zero = 0;
unsigned int var_10 = 3940217691U;
int var_11 = 1180512003;
unsigned char var_12 = (unsigned char)188;
unsigned short var_13 = (unsigned short)48244;
unsigned char var_14 = (unsigned char)100;
unsigned char var_15 = (unsigned char)210;
unsigned int var_16 = 419538489U;
unsigned char var_17 = (unsigned char)255;
unsigned short arr_0 [12] [12] ;
unsigned char arr_4 [25] ;
unsigned int arr_5 [25] ;
unsigned int arr_7 [25] [25] ;
int arr_3 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)1609 : (unsigned short)50457;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (unsigned char)100;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = 1230795298U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = 3901061908U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -1300085796 : -1686812160;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
