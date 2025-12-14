#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_10 = 11011949858403090262ULL;
unsigned long long int var_12 = 11968131830052063583ULL;
unsigned char var_14 = (unsigned char)21;
int zero = 0;
unsigned long long int var_16 = 12531947790374521278ULL;
long long int var_17 = -5431063573251806153LL;
unsigned int var_18 = 2944089990U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
