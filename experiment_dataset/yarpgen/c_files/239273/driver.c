#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 4915619303212994268ULL;
unsigned long long int var_7 = 14132762058331087232ULL;
short var_9 = (short)-22406;
short var_10 = (short)-25795;
int zero = 0;
unsigned long long int var_11 = 1936186614581348922ULL;
short var_12 = (short)-28922;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
