#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10813775950856262078ULL;
_Bool var_2 = (_Bool)1;
int var_5 = 726366484;
unsigned char var_9 = (unsigned char)73;
int zero = 0;
short var_10 = (short)-1982;
unsigned long long int var_11 = 16410471908544821677ULL;
short var_12 = (short)-22429;
unsigned char arr_4 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (unsigned char)199;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
