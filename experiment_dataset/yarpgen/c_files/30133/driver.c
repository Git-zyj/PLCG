#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)62286;
int var_3 = -935951212;
int var_10 = 1806247653;
unsigned long long int var_13 = 10624287255229020239ULL;
unsigned short var_15 = (unsigned short)21700;
int zero = 0;
unsigned short var_20 = (unsigned short)21860;
int var_21 = -428002789;
unsigned char var_22 = (unsigned char)126;
unsigned short var_23 = (unsigned short)26681;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
