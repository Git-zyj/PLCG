#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)21;
signed char var_1 = (signed char)9;
unsigned char var_4 = (unsigned char)65;
signed char var_5 = (signed char)-85;
signed char var_8 = (signed char)71;
unsigned short var_12 = (unsigned short)48696;
unsigned char var_16 = (unsigned char)122;
int zero = 0;
unsigned char var_18 = (unsigned char)130;
int var_19 = -107222984;
short var_20 = (short)-14532;
short var_21 = (short)-22790;
unsigned short var_22 = (unsigned short)32689;
signed char var_23 = (signed char)110;
signed char arr_2 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (signed char)33;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
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
