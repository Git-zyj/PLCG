#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1797655312009606630LL;
short var_4 = (short)-22407;
long long int var_5 = 693110273953516694LL;
unsigned short var_6 = (unsigned short)9525;
int zero = 0;
int var_12 = -1312317910;
unsigned long long int var_13 = 4204461182221476499ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
