#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)38169;
unsigned long long int var_4 = 6161658538538073964ULL;
unsigned short var_7 = (unsigned short)59103;
int zero = 0;
unsigned short var_10 = (unsigned short)1364;
unsigned short var_11 = (unsigned short)47;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
