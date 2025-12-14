#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-83;
int var_7 = 1406901083;
unsigned int var_11 = 2848938287U;
int zero = 0;
unsigned int var_17 = 2498863963U;
unsigned int var_18 = 1340163325U;
unsigned long long int var_19 = 5672845326782664637ULL;
short var_20 = (short)-13364;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
