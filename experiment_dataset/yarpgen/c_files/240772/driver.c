#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)149;
unsigned char var_1 = (unsigned char)13;
signed char var_4 = (signed char)-43;
unsigned char var_5 = (unsigned char)106;
unsigned char var_7 = (unsigned char)179;
unsigned char var_10 = (unsigned char)160;
int zero = 0;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)-125;
signed char var_14 = (signed char)92;
unsigned short var_15 = (unsigned short)17435;
int var_16 = 975172811;
int arr_0 [12] ;
unsigned char arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 1004412859;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned char)51;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
