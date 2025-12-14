#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4410139517346939242LL;
short var_13 = (short)-1470;
int zero = 0;
long long int var_14 = 8873077464031944050LL;
unsigned int var_15 = 3887722432U;
unsigned short var_16 = (unsigned short)44326;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
