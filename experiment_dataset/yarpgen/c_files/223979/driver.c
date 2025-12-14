#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 1968446162911271381LL;
long long int var_8 = 7961933655266941973LL;
long long int var_12 = 8509513968042988329LL;
int zero = 0;
unsigned short var_13 = (unsigned short)52294;
unsigned long long int var_14 = 9448018939830976315ULL;
unsigned int var_15 = 1223921253U;
void init() {
}

void checksum() {
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
