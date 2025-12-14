#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1294422786;
int var_2 = -362157487;
short var_12 = (short)-9272;
unsigned long long int var_14 = 1705742093258350187ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)50578;
long long int var_17 = 2088287355242782590LL;
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
