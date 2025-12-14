#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 11751667320066048218ULL;
unsigned long long int var_10 = 11073836589854791048ULL;
int zero = 0;
unsigned long long int var_14 = 2767821045122806916ULL;
unsigned long long int var_15 = 10533736355767295411ULL;
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
