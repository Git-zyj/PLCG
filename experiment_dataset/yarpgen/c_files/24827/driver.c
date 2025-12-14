#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)35424;
int var_6 = 1033718509;
unsigned short var_9 = (unsigned short)30440;
unsigned int var_12 = 1166990508U;
unsigned int var_13 = 4136998522U;
int var_15 = 1422359716;
int zero = 0;
unsigned long long int var_16 = 15008127066112452341ULL;
unsigned char var_17 = (unsigned char)127;
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
