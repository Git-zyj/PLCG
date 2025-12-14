#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = 1499377212;
unsigned int var_9 = 1806271587U;
unsigned long long int var_13 = 9397073521232707361ULL;
int zero = 0;
int var_14 = -480353762;
signed char var_15 = (signed char)-125;
int var_16 = 474160575;
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
