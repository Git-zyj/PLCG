#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-6669;
long long int var_4 = -9127394975471121729LL;
unsigned int var_5 = 9314734U;
unsigned int var_7 = 31299672U;
int zero = 0;
int var_10 = 1267133987;
long long int var_11 = -6324022778736293669LL;
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
