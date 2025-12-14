#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7594870651638370964LL;
unsigned long long int var_5 = 2536557838044271335ULL;
int var_10 = -1859456125;
short var_14 = (short)16259;
int zero = 0;
int var_16 = 717734753;
unsigned long long int var_17 = 4587669292783839179ULL;
signed char var_18 = (signed char)112;
short var_19 = (short)-16101;
unsigned short var_20 = (unsigned short)63835;
unsigned int var_21 = 384312622U;
unsigned short arr_2 [13] ;
int arr_4 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (unsigned short)11012;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = -1397121825;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
