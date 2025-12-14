#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-6985;
unsigned long long int var_3 = 17472569316267569542ULL;
short var_11 = (short)8353;
int zero = 0;
unsigned long long int var_15 = 4541198960038756593ULL;
unsigned long long int var_16 = 1228638226449578957ULL;
short var_17 = (short)10603;
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
