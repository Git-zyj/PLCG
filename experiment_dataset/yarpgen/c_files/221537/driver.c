#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2437875703U;
unsigned long long int var_2 = 6060704288572941532ULL;
unsigned long long int var_3 = 12125182419699777859ULL;
unsigned int var_4 = 905677827U;
unsigned int var_7 = 1111115856U;
unsigned int var_8 = 221989529U;
int zero = 0;
unsigned char var_10 = (unsigned char)144;
unsigned char var_11 = (unsigned char)81;
unsigned int var_12 = 910980106U;
unsigned char var_13 = (unsigned char)41;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
