#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45249;
signed char var_3 = (signed char)43;
unsigned char var_4 = (unsigned char)210;
signed char var_8 = (signed char)-54;
unsigned char var_10 = (unsigned char)42;
short var_15 = (short)-15586;
unsigned short var_16 = (unsigned short)23854;
unsigned char var_17 = (unsigned char)123;
int zero = 0;
short var_18 = (short)-24904;
signed char var_19 = (signed char)-19;
unsigned char var_20 = (unsigned char)219;
signed char var_21 = (signed char)-3;
short arr_0 [14] ;
unsigned char arr_1 [14] [14] ;
signed char arr_2 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (short)-22445;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (signed char)4;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
