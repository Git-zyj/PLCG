#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)18029;
int var_5 = -643966165;
int var_8 = -2093985936;
signed char var_14 = (signed char)109;
int zero = 0;
int var_16 = -1365618727;
signed char var_17 = (signed char)53;
int var_18 = 1024941421;
unsigned long long int var_19 = 5960474956971351064ULL;
unsigned long long int var_20 = 12898271133643083345ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
