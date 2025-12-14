#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)213;
short var_3 = (short)30050;
unsigned int var_6 = 1983913189U;
long long int var_7 = -4436871974108977186LL;
short var_12 = (short)4418;
int zero = 0;
unsigned int var_17 = 4131368497U;
unsigned char var_18 = (unsigned char)254;
unsigned int var_19 = 1833198313U;
short var_20 = (short)-9384;
unsigned short arr_2 [20] ;
unsigned short arr_3 [20] ;
unsigned int arr_10 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (unsigned short)46642;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (unsigned short)32256;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = 3054431164U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
