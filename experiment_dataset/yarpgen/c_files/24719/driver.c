#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2124930510U;
unsigned int var_2 = 1037250685U;
unsigned int var_10 = 4090531254U;
unsigned int var_12 = 3302538732U;
unsigned int var_13 = 980654271U;
unsigned int var_15 = 3773017185U;
int zero = 0;
unsigned int var_16 = 3887421761U;
unsigned int var_17 = 1857283936U;
unsigned int var_18 = 845105265U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
