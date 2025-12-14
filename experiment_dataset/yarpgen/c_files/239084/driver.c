#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)33496;
signed char var_6 = (signed char)-26;
unsigned long long int var_8 = 2997968722363555071ULL;
unsigned int var_11 = 4008869876U;
long long int var_13 = -9078767222125052314LL;
long long int var_15 = 6494473296507277770LL;
int zero = 0;
long long int var_16 = -8941166633300882384LL;
unsigned long long int var_17 = 5825305053569252636ULL;
void init() {
}

void checksum() {
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
