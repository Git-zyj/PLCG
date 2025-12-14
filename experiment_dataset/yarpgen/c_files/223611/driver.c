#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)26;
unsigned long long int var_2 = 15521928577330187942ULL;
unsigned int var_7 = 240468939U;
unsigned long long int var_8 = 2575806218756957051ULL;
int zero = 0;
unsigned long long int var_10 = 17832350240666763732ULL;
int var_11 = -168633653;
int var_12 = 590619459;
void init() {
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
