#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15156646769270613064ULL;
unsigned int var_2 = 831235717U;
unsigned int var_11 = 1497847243U;
unsigned char var_12 = (unsigned char)191;
int zero = 0;
int var_16 = 219211741;
unsigned long long int var_17 = 6665654294664055734ULL;
unsigned long long int var_18 = 5014480476715503430ULL;
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
