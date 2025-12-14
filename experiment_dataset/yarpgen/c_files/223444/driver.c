#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14762217479777420086ULL;
unsigned int var_1 = 3411182196U;
unsigned int var_8 = 390372387U;
unsigned long long int var_12 = 2911254236543919645ULL;
int zero = 0;
int var_14 = -747589481;
int var_15 = -1672255894;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
