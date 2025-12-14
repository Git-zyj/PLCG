#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)120;
int var_1 = -1448382599;
int var_2 = 1696256498;
unsigned char var_5 = (unsigned char)135;
unsigned char var_8 = (unsigned char)16;
unsigned char var_9 = (unsigned char)152;
unsigned char var_10 = (unsigned char)70;
unsigned int var_12 = 3694753004U;
int var_13 = 1891962265;
unsigned char var_15 = (unsigned char)254;
int zero = 0;
unsigned char var_16 = (unsigned char)98;
int var_17 = 983824230;
unsigned char var_18 = (unsigned char)101;
unsigned int var_19 = 2591190763U;
int var_20 = 2090688915;
unsigned char var_21 = (unsigned char)126;
int var_22 = 345284967;
unsigned char arr_0 [13] ;
int arr_5 [22] [22] ;
int arr_6 [22] ;
int arr_9 [22] ;
unsigned char arr_10 [22] [22] ;
unsigned char arr_11 [22] ;
unsigned int arr_2 [13] ;
int arr_3 [13] ;
unsigned int arr_8 [22] ;
int arr_12 [22] ;
unsigned int arr_13 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned char)122;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = 2093058463;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = 562855750;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = -769779113;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned char)42;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = (unsigned char)112;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 3608013521U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 1942936343;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = 283185397U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_12 [i_0] = -1543681590;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_13 [i_0] = 1900891664U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
