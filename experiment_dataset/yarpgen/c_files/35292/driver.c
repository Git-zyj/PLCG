#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -262736022;
unsigned short var_1 = (unsigned short)4142;
unsigned char var_4 = (unsigned char)85;
long long int var_6 = -4562327969404723922LL;
unsigned long long int var_10 = 11363144153596564321ULL;
int zero = 0;
short var_11 = (short)-19197;
unsigned long long int var_12 = 1262945792207813284ULL;
signed char var_13 = (signed char)85;
signed char var_14 = (signed char)8;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
