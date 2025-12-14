#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3274884794U;
unsigned char var_4 = (unsigned char)150;
unsigned long long int var_6 = 1485008152868808499ULL;
int var_10 = -725947966;
long long int var_12 = -8959591375156667825LL;
int zero = 0;
unsigned long long int var_13 = 7215059221251987966ULL;
int var_14 = 1924823252;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
