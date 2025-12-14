#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 11302000275866994288ULL;
unsigned short var_7 = (unsigned short)33611;
unsigned short var_12 = (unsigned short)40631;
int zero = 0;
unsigned int var_19 = 3495708863U;
unsigned short var_20 = (unsigned short)23149;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
