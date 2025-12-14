#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_10 = (short)-14017;
_Bool var_11 = (_Bool)1;
short var_12 = (short)32263;
unsigned long long int var_19 = 14293897550406892575ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)48378;
short var_21 = (short)-4480;
unsigned char var_22 = (unsigned char)66;
signed char var_23 = (signed char)75;
int var_24 = -1918938575;
unsigned char arr_0 [16] ;
long long int arr_1 [16] ;
unsigned char arr_5 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned char)158;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = -914570741337285432LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)29 : (unsigned char)211;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
