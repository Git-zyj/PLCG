#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3826444260139894635LL;
unsigned int var_5 = 553579915U;
unsigned long long int var_10 = 3633803916713326052ULL;
signed char var_11 = (signed char)-40;
unsigned long long int var_12 = 2572632561043953677ULL;
unsigned int var_16 = 937291607U;
int zero = 0;
unsigned short var_17 = (unsigned short)2216;
unsigned short var_18 = (unsigned short)51896;
unsigned char var_19 = (unsigned char)185;
unsigned char arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned char)80;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
