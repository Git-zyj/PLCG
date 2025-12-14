#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)230;
unsigned long long int var_10 = 14204394991327999383ULL;
unsigned long long int var_15 = 8094139281283267485ULL;
int zero = 0;
unsigned int var_17 = 3555171154U;
unsigned long long int var_18 = 8307698293309087113ULL;
void init() {
}

void checksum() {
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
