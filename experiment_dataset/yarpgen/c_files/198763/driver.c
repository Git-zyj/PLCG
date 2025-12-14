#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)28906;
unsigned char var_4 = (unsigned char)41;
unsigned char var_5 = (unsigned char)182;
signed char var_6 = (signed char)95;
unsigned short var_9 = (unsigned short)53397;
unsigned short var_10 = (unsigned short)46497;
int zero = 0;
signed char var_11 = (signed char)-93;
unsigned short var_12 = (unsigned short)1470;
unsigned char var_13 = (unsigned char)211;
_Bool var_14 = (_Bool)1;
unsigned int arr_0 [22] [22] ;
signed char arr_2 [22] ;
unsigned char arr_3 [22] ;
unsigned char arr_5 [22] [22] ;
unsigned int arr_6 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = 2818908730U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (signed char)20;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (unsigned char)227;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)24;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? 2969310385U : 3034639691U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
