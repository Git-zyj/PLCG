#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_2 = (unsigned char)171;
unsigned long long int var_3 = 2622438563464866160ULL;
short var_4 = (short)3077;
unsigned short var_10 = (unsigned short)59145;
int zero = 0;
unsigned int var_13 = 455558200U;
int var_14 = 444048866;
unsigned int var_15 = 4229102140U;
short var_16 = (short)12901;
short var_17 = (short)27836;
int var_18 = 882953505;
unsigned long long int arr_0 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 8201725184152241362ULL;
}

void checksum() {
    hash(&seed, var_13);
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
