#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)30;
unsigned int var_6 = 2912202700U;
unsigned char var_9 = (unsigned char)154;
unsigned int var_11 = 1369854832U;
_Bool var_13 = (_Bool)1;
signed char var_15 = (signed char)-69;
short var_16 = (short)-3221;
unsigned char var_17 = (unsigned char)28;
unsigned long long int var_18 = 12178342258828380543ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)230;
short var_21 = (short)-1990;
short var_22 = (short)28904;
unsigned int var_23 = 524390260U;
signed char var_24 = (signed char)91;
unsigned short var_25 = (unsigned short)49962;
unsigned short var_26 = (unsigned short)32674;
_Bool var_27 = (_Bool)1;
short arr_2 [11] [11] ;
short arr_6 [19] [19] ;
short arr_10 [19] ;
unsigned char arr_11 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-31302;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = (short)8660;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = (short)-15134;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = (unsigned char)62;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
