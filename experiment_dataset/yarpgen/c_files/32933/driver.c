#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-20;
unsigned short var_5 = (unsigned short)58308;
unsigned int var_10 = 56313290U;
unsigned char var_13 = (unsigned char)244;
int zero = 0;
unsigned char var_14 = (unsigned char)217;
unsigned short var_15 = (unsigned short)48379;
short var_16 = (short)-29855;
unsigned int var_17 = 1732242559U;
unsigned int var_18 = 1788306587U;
unsigned char arr_0 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned char)140;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
