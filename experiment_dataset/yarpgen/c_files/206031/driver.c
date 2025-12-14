#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 15468922098264143179ULL;
unsigned long long int var_10 = 1032748481809039042ULL;
short var_11 = (short)17886;
long long int var_12 = -7851543379028156433LL;
unsigned int var_15 = 4203285718U;
int zero = 0;
unsigned int var_17 = 4038087991U;
unsigned char var_18 = (unsigned char)253;
int var_19 = -1194101684;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
