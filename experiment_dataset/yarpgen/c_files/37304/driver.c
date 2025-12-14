#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)73;
short var_2 = (short)-28725;
unsigned int var_5 = 2502278980U;
unsigned char var_6 = (unsigned char)53;
short var_12 = (short)14311;
int zero = 0;
unsigned short var_17 = (unsigned short)10180;
unsigned int var_18 = 175941815U;
unsigned short var_19 = (unsigned short)21870;
unsigned long long int var_20 = 5467803711012369789ULL;
unsigned int arr_5 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = 1450747756U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
