#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7597093890800157459ULL;
unsigned long long int var_1 = 11230003034220417441ULL;
unsigned int var_5 = 555316979U;
int zero = 0;
unsigned int var_14 = 3598448959U;
long long int var_15 = -3024650038953805213LL;
void init() {
}

void checksum() {
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
