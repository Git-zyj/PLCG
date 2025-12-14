#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1826484468801663445LL;
unsigned int var_6 = 4264352207U;
long long int var_10 = -5079672760430910663LL;
unsigned short var_13 = (unsigned short)26687;
int zero = 0;
unsigned int var_17 = 2083302498U;
unsigned long long int var_18 = 11100357287030188373ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
