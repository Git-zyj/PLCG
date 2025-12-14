#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)15133;
int var_2 = 1320862147;
unsigned int var_4 = 3955547714U;
unsigned short var_6 = (unsigned short)42361;
int var_9 = -543441062;
int zero = 0;
unsigned long long int var_10 = 11849806153130034666ULL;
short var_11 = (short)-28537;
int var_12 = -912142832;
unsigned short var_13 = (unsigned short)62272;
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
