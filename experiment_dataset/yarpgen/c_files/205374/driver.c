#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)47013;
unsigned short var_5 = (unsigned short)6728;
signed char var_11 = (signed char)18;
int zero = 0;
unsigned long long int var_16 = 17717272415110547394ULL;
unsigned short var_17 = (unsigned short)35896;
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
