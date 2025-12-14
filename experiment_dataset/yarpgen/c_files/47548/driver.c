#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)155;
short var_6 = (short)18840;
int var_9 = 1348605961;
int zero = 0;
long long int var_13 = -5231678160086379118LL;
long long int var_14 = -7471114043254274806LL;
unsigned int var_15 = 4029570629U;
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
