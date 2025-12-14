#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)71;
signed char var_2 = (signed char)-42;
short var_3 = (short)20688;
unsigned int var_4 = 3129142980U;
signed char var_6 = (signed char)59;
int var_7 = 1253318779;
short var_9 = (short)-21283;
unsigned short var_10 = (unsigned short)59224;
int zero = 0;
signed char var_11 = (signed char)-52;
signed char var_12 = (signed char)-61;
int var_13 = -407342627;
short var_14 = (short)-30453;
signed char var_15 = (signed char)-72;
unsigned short var_16 = (unsigned short)11886;
signed char var_17 = (signed char)69;
long long int arr_0 [19] [19] ;
unsigned char arr_1 [19] [19] ;
signed char arr_3 [11] [11] ;
short arr_4 [11] ;
signed char arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = -4769947764048942057LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)126;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)111 : (signed char)97;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)-14499 : (short)-25141;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (signed char)71;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
