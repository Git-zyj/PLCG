#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)4556;
unsigned char var_5 = (unsigned char)109;
unsigned long long int var_6 = 9401382614230043275ULL;
long long int var_7 = -4370479200596386230LL;
unsigned char var_9 = (unsigned char)48;
int var_11 = 2132490586;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 503655134U;
unsigned char var_16 = (unsigned char)148;
signed char var_17 = (signed char)-127;
short var_18 = (short)22999;
int arr_0 [17] ;
unsigned char arr_1 [17] ;
unsigned short arr_2 [17] ;
unsigned short arr_3 [17] ;
unsigned char arr_6 [19] ;
signed char arr_4 [17] ;
signed char arr_8 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 1593812276;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned char)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (unsigned short)23732;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (unsigned short)38728;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned char)144 : (unsigned char)225;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (signed char)-98;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (signed char)-42 : (signed char)-5;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
