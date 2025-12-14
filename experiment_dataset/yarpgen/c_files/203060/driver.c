#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)7191;
short var_2 = (short)-29531;
short var_4 = (short)-8296;
_Bool var_5 = (_Bool)0;
unsigned char var_7 = (unsigned char)154;
unsigned char var_8 = (unsigned char)240;
unsigned char var_9 = (unsigned char)94;
signed char var_11 = (signed char)-70;
int zero = 0;
signed char var_12 = (signed char)40;
signed char var_13 = (signed char)92;
unsigned char var_14 = (unsigned char)112;
unsigned char var_15 = (unsigned char)105;
short arr_0 [12] ;
signed char arr_4 [10] ;
short arr_5 [10] ;
unsigned long long int arr_2 [12] ;
short arr_6 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (short)2479;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (signed char)-119;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (short)24617;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 12992536147299489160ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (short)-25462;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
