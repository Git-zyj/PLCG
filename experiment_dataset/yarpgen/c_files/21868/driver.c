#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9576047865907782139ULL;
unsigned long long int var_10 = 11045945103619205477ULL;
unsigned char var_13 = (unsigned char)101;
unsigned long long int var_15 = 12307429218114436209ULL;
int zero = 0;
int var_17 = -1858655820;
unsigned long long int var_18 = 11583134468582802155ULL;
unsigned int var_19 = 1180831777U;
unsigned char var_20 = (unsigned char)9;
unsigned int arr_0 [24] ;
unsigned char arr_1 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 1210070905U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned char)183 : (unsigned char)215;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
