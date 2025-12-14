#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)21210;
int var_5 = 789533668;
unsigned short var_9 = (unsigned short)15095;
int var_10 = 625893981;
int zero = 0;
unsigned long long int var_14 = 3310585882637152842ULL;
unsigned long long int var_15 = 8685803216320799820ULL;
int var_16 = 166887590;
unsigned short var_17 = (unsigned short)63912;
unsigned short arr_6 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned short)31603 : (unsigned short)35827;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
