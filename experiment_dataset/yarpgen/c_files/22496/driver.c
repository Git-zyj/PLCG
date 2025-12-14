#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)129;
unsigned char var_10 = (unsigned char)225;
unsigned short var_12 = (unsigned short)62719;
int zero = 0;
unsigned short var_13 = (unsigned short)61261;
signed char var_14 = (signed char)123;
unsigned int var_15 = 4135020445U;
unsigned short var_16 = (unsigned short)17598;
unsigned short var_17 = (unsigned short)57794;
unsigned int var_18 = 3471306424U;
int arr_0 [19] ;
unsigned long long int arr_1 [19] ;
unsigned long long int arr_3 [24] ;
unsigned int arr_4 [24] ;
unsigned int arr_5 [24] ;
unsigned long long int arr_2 [19] ;
unsigned char arr_6 [24] ;
unsigned char arr_7 [24] ;
unsigned char arr_10 [24] ;
unsigned char arr_11 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 2002957152;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 17110678719515739640ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 12916396677759564506ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 2827900168U : 2310949235U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = 1537892035U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 18207619930936073686ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned char)23 : (unsigned char)254;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned char)63 : (unsigned char)221;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = (unsigned char)229;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = (unsigned char)46;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
