#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1521849443;
unsigned int var_8 = 3983931763U;
unsigned long long int var_15 = 12681368766641838532ULL;
int zero = 0;
long long int var_16 = -2984928658658648731LL;
long long int var_17 = -6332497309196326370LL;
int var_18 = -1886482178;
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
