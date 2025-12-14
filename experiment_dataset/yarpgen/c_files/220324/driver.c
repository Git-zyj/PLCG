#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 724790140;
unsigned long long int var_8 = 11494585269269705834ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)47;
signed char var_13 = (signed char)81;
unsigned long long int var_14 = 2797622953867749977ULL;
unsigned char var_15 = (unsigned char)42;
unsigned char var_16 = (unsigned char)33;
unsigned char arr_17 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_17 [i_0] = (unsigned char)186;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
