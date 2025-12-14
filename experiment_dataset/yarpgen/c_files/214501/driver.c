#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 403278755476922605ULL;
short var_6 = (short)-344;
unsigned long long int var_7 = 18225540148338616100ULL;
unsigned long long int var_10 = 15945638779454724116ULL;
int zero = 0;
short var_12 = (short)8559;
short var_13 = (short)17085;
unsigned long long int var_14 = 10759046453096721155ULL;
short var_15 = (short)26947;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
