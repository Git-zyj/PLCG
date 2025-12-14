#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)119;
long long int var_10 = 2391768664540363659LL;
int var_13 = 1409267229;
int zero = 0;
unsigned short var_19 = (unsigned short)11605;
unsigned short var_20 = (unsigned short)44040;
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
