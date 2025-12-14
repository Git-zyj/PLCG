#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 12776382586993774385ULL;
short var_11 = (short)-2020;
int zero = 0;
unsigned long long int var_15 = 12095398850549456456ULL;
unsigned long long int var_16 = 11355575253639611195ULL;
short var_17 = (short)-4188;
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
