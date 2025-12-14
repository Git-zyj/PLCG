#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3765378652U;
unsigned short var_7 = (unsigned short)17972;
int zero = 0;
unsigned short var_12 = (unsigned short)27072;
long long int var_13 = 7475239120285422128LL;
long long int var_14 = 7135685352273842533LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
