#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_5 = 43004167U;
signed char var_9 = (signed char)23;
unsigned char var_11 = (unsigned char)192;
int zero = 0;
short var_20 = (short)20391;
_Bool var_21 = (_Bool)1;
short var_22 = (short)-11411;
long long int var_23 = 6744233815001170893LL;
unsigned short var_24 = (unsigned short)2651;
signed char arr_0 [11] [11] ;
unsigned char arr_1 [11] [11] ;
unsigned int arr_4 [11] ;
unsigned char arr_5 [11] ;
unsigned char arr_2 [11] ;
_Bool arr_6 [11] ;
signed char arr_7 [11] [11] ;
short arr_8 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-84 : (signed char)-123;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)75 : (unsigned char)57;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = 2902291111U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (unsigned char)243;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)228 : (unsigned char)90;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)62;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = (short)-14099;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
