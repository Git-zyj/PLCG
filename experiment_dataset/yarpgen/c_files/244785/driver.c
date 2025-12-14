#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6087656628601679919ULL;
unsigned char var_1 = (unsigned char)45;
unsigned long long int var_8 = 1357753992043662046ULL;
unsigned int var_10 = 3293968496U;
unsigned char var_13 = (unsigned char)226;
int zero = 0;
signed char var_17 = (signed char)-30;
short var_18 = (short)-2169;
unsigned char var_19 = (unsigned char)2;
short var_20 = (short)-8592;
long long int var_21 = 3963329494439538750LL;
short var_22 = (short)-4113;
long long int var_23 = -2464461416699546662LL;
short var_24 = (short)-21136;
signed char var_25 = (signed char)15;
unsigned char var_26 = (unsigned char)24;
int arr_13 [25] ;
short arr_2 [22] [22] ;
_Bool arr_7 [22] ;
_Bool arr_16 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? -738079956 : 1398830826;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (short)2203;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_16 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
