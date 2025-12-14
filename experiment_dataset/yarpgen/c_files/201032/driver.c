#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6733;
unsigned short var_2 = (unsigned short)58572;
unsigned short var_4 = (unsigned short)40038;
unsigned short var_5 = (unsigned short)10252;
unsigned short var_7 = (unsigned short)33481;
unsigned char var_8 = (unsigned char)32;
short var_9 = (short)-372;
int zero = 0;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)105;
unsigned short var_16 = (unsigned short)48942;
short var_17 = (short)662;
unsigned short arr_1 [20] ;
unsigned char arr_4 [20] ;
unsigned short arr_9 [13] ;
unsigned short arr_7 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned short)1929;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (unsigned char)100;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned short)13693 : (unsigned short)21239;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)24242 : (unsigned short)23529;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
