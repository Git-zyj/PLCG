#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)146;
unsigned char var_3 = (unsigned char)214;
unsigned char var_4 = (unsigned char)100;
unsigned char var_5 = (unsigned char)194;
unsigned char var_6 = (unsigned char)215;
short var_7 = (short)14432;
unsigned char var_9 = (unsigned char)119;
short var_12 = (short)-28913;
unsigned char var_13 = (unsigned char)72;
int zero = 0;
short var_14 = (short)16497;
unsigned char var_15 = (unsigned char)178;
unsigned char var_16 = (unsigned char)52;
unsigned char var_17 = (unsigned char)165;
short arr_0 [14] [14] ;
short arr_1 [14] [14] ;
unsigned char arr_2 [14] [14] ;
unsigned char arr_3 [14] ;
short arr_4 [14] ;
short arr_5 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (short)10362;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (short)1313;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)213;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (unsigned char)166;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (short)31995;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (short)-95;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
