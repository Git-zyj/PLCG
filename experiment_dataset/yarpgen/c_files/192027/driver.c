#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)36;
unsigned char var_3 = (unsigned char)128;
_Bool var_5 = (_Bool)1;
int zero = 0;
short var_11 = (short)-21870;
unsigned long long int var_12 = 1894087566609967575ULL;
unsigned char var_13 = (unsigned char)141;
unsigned char var_14 = (unsigned char)2;
unsigned int arr_2 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 3338900664U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
