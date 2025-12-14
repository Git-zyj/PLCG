#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)23060;
short var_11 = (short)-31446;
unsigned char var_14 = (unsigned char)0;
short var_17 = (short)-12876;
int zero = 0;
short var_20 = (short)-6744;
unsigned char var_21 = (unsigned char)122;
unsigned short var_22 = (unsigned short)37309;
_Bool var_23 = (_Bool)0;
unsigned long long int var_24 = 18085136251540035284ULL;
unsigned short var_25 = (unsigned short)62837;
unsigned char arr_1 [18] [18] ;
unsigned int arr_3 [18] ;
short arr_4 [18] [18] ;
signed char arr_6 [18] [18] [18] ;
unsigned long long int arr_7 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)110;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 4244242187U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (short)30442;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)44;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = 6797295362339561435ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
