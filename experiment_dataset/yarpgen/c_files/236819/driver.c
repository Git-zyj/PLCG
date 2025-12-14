#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3849197130527669252ULL;
short var_8 = (short)-14936;
unsigned long long int var_9 = 15077095267325920229ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)42;
int var_20 = 1076074024;
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
