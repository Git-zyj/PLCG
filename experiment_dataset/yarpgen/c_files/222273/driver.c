#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1396828607U;
unsigned short var_5 = (unsigned short)56681;
unsigned char var_9 = (unsigned char)45;
signed char var_14 = (signed char)-97;
int zero = 0;
_Bool var_20 = (_Bool)1;
int var_21 = -1776077444;
unsigned long long int var_22 = 6660219893823064607ULL;
long long int var_23 = -8726979924836979408LL;
unsigned int var_24 = 240178411U;
unsigned char arr_2 [15] ;
unsigned char arr_3 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned char)70;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (unsigned char)207;
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
