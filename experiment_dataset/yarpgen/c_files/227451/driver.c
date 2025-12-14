#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-10234;
unsigned int var_13 = 901750951U;
unsigned int var_15 = 403458968U;
int zero = 0;
unsigned int var_17 = 1009314841U;
unsigned int var_18 = 2627535099U;
unsigned long long int var_19 = 5380635005622800347ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
