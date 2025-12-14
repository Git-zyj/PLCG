#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 1489475853353404043ULL;
unsigned long long int var_4 = 15335557578721694932ULL;
unsigned long long int var_5 = 8195033088240571228ULL;
long long int var_7 = 1477446197092198523LL;
long long int var_8 = -1164624535691263067LL;
int zero = 0;
long long int var_11 = 4365220439277151996LL;
unsigned long long int var_12 = 5565446985491758218ULL;
int var_13 = -1767696090;
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
