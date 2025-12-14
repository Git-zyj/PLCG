#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)32556;
short var_3 = (short)11448;
unsigned char var_4 = (unsigned char)171;
int zero = 0;
unsigned char var_11 = (unsigned char)96;
unsigned long long int var_12 = 1665262525932192172ULL;
unsigned long long int var_13 = 6888456318057833873ULL;
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
