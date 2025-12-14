#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 124681827U;
unsigned short var_10 = (unsigned short)64174;
int zero = 0;
unsigned int var_15 = 449431137U;
unsigned short var_16 = (unsigned short)37692;
long long int var_17 = 7650738318108856064LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
