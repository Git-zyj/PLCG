#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 1740846405U;
unsigned int var_8 = 43280941U;
long long int var_12 = -9013724570798481359LL;
int zero = 0;
unsigned long long int var_16 = 2136012390986756131ULL;
long long int var_17 = -2370899594881144547LL;
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
