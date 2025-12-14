#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)81;
int var_1 = -1686530860;
unsigned int var_3 = 1162860114U;
unsigned short var_4 = (unsigned short)45692;
unsigned char var_7 = (unsigned char)197;
short var_8 = (short)26330;
unsigned long long int var_10 = 14586230068195079597ULL;
int zero = 0;
unsigned int var_13 = 3100511670U;
short var_14 = (short)-27924;
short var_15 = (short)29058;
unsigned char arr_2 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)84;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
