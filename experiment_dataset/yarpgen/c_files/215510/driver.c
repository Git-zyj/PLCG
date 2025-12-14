#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2233396181U;
unsigned int var_3 = 1771641251U;
unsigned char var_5 = (unsigned char)99;
long long int var_12 = -8390396831095405152LL;
long long int var_13 = 1210127302162048699LL;
int zero = 0;
unsigned long long int var_15 = 8230953390085046436ULL;
unsigned int var_16 = 1863829915U;
unsigned long long int var_17 = 8512502426289581665ULL;
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
