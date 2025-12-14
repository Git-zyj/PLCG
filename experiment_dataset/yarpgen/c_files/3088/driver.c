#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17916985840800300390ULL;
unsigned long long int var_5 = 4155778029537590816ULL;
unsigned short var_6 = (unsigned short)28950;
unsigned short var_9 = (unsigned short)17878;
unsigned short var_10 = (unsigned short)9390;
long long int var_13 = 2494004920818694420LL;
int zero = 0;
unsigned long long int var_14 = 17218752648025244592ULL;
unsigned short var_15 = (unsigned short)12162;
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
