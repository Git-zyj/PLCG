#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1844703000;
int var_5 = -1731648137;
unsigned int var_13 = 3159585347U;
int zero = 0;
int var_16 = 1866040258;
unsigned long long int var_17 = 8256930085490372775ULL;
int var_18 = 1500884448;
unsigned char var_19 = (unsigned char)53;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
