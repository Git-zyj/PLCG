#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1218988281064556548LL;
unsigned int var_10 = 447794589U;
int var_11 = 1848151321;
short var_14 = (short)-22663;
int zero = 0;
unsigned long long int var_15 = 3950836827750500218ULL;
unsigned int var_16 = 322839991U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
