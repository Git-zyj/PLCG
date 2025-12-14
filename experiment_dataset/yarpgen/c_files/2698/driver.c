#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_9 = 1979033075U;
signed char var_11 = (signed char)122;
unsigned char var_14 = (unsigned char)162;
unsigned long long int var_15 = 16848518660769058958ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)79;
unsigned int var_17 = 3893996552U;
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
