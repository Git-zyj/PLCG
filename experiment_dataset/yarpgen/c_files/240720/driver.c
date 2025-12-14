#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)29;
unsigned char var_5 = (unsigned char)204;
unsigned int var_8 = 356672780U;
long long int var_11 = -3180335286053653634LL;
unsigned int var_15 = 2262926712U;
unsigned int var_16 = 3168735743U;
int zero = 0;
short var_17 = (short)32471;
long long int var_18 = 1881935655310155009LL;
void init() {
}

void checksum() {
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
