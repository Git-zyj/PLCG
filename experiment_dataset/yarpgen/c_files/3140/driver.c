#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4653;
unsigned short var_1 = (unsigned short)5529;
unsigned long long int var_2 = 7431588323653203808ULL;
long long int var_5 = 1927812425858356796LL;
unsigned char var_6 = (unsigned char)87;
unsigned long long int var_8 = 2757956373241720713ULL;
unsigned long long int var_9 = 12229914674364210840ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)41327;
unsigned short var_12 = (unsigned short)33024;
unsigned short var_13 = (unsigned short)26969;
void init() {
}

void checksum() {
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
