#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)59;
signed char var_9 = (signed char)45;
int zero = 0;
unsigned long long int var_15 = 188928791286062837ULL;
unsigned long long int var_16 = 613823897972609735ULL;
unsigned char var_17 = (unsigned char)27;
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
