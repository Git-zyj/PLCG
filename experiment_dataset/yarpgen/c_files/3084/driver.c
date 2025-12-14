#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1745416525;
int var_1 = -1918117162;
int var_2 = 782244239;
unsigned char var_3 = (unsigned char)79;
unsigned char var_4 = (unsigned char)54;
unsigned int var_10 = 3558037079U;
long long int var_11 = -7592092857051128732LL;
int var_13 = 336660762;
int zero = 0;
int var_15 = 1786963883;
signed char var_16 = (signed char)127;
long long int var_17 = -3095090278947442416LL;
unsigned int var_18 = 4126360452U;
int var_19 = 1497523981;
unsigned int var_20 = 2637976111U;
unsigned long long int var_21 = 14226531295819774189ULL;
unsigned long long int var_22 = 18326504412749613272ULL;
long long int var_23 = -9078940496190381065LL;
unsigned int var_24 = 3619871931U;
unsigned int var_25 = 4246673260U;
long long int arr_0 [25] ;
unsigned short arr_1 [25] ;
unsigned long long int arr_5 [16] ;
long long int arr_6 [16] [16] ;
long long int arr_8 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 682240446118614867LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned short)26597;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = 14779631798398589644ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = -1879994340208275231LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 425802093363102243LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
