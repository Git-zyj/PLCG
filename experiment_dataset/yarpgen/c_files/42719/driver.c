#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)7;
unsigned int var_4 = 4223233298U;
unsigned int var_5 = 1341881864U;
int var_6 = -2084394951;
long long int var_9 = 6794721512231945634LL;
long long int var_11 = -7543143581771711996LL;
unsigned int var_12 = 2215910352U;
unsigned char var_19 = (unsigned char)104;
int zero = 0;
long long int var_20 = 2192788971725468081LL;
int var_21 = -1747969270;
long long int var_22 = -1527043621094150146LL;
unsigned int var_23 = 3809839883U;
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
