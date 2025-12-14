#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-27824;
unsigned char var_3 = (unsigned char)50;
unsigned long long int var_7 = 5692374063346319280ULL;
unsigned short var_11 = (unsigned short)5793;
int zero = 0;
int var_13 = -1808377294;
unsigned short var_14 = (unsigned short)37222;
unsigned long long int var_15 = 4931880186958277124ULL;
unsigned int var_16 = 2407551277U;
short var_17 = (short)4181;
unsigned long long int var_18 = 388256584454105065ULL;
unsigned long long int arr_0 [12] [12] ;
short arr_5 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = 7889318216492941334ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-17721;
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
