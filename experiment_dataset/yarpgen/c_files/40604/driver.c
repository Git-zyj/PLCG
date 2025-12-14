#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1008746957993146588LL;
signed char var_2 = (signed char)41;
unsigned int var_3 = 2114199560U;
signed char var_4 = (signed char)48;
unsigned char var_5 = (unsigned char)214;
signed char var_9 = (signed char)-22;
unsigned long long int var_12 = 4024269562832404819ULL;
unsigned long long int var_15 = 12508996506806971438ULL;
int zero = 0;
long long int var_16 = -7874883711347727112LL;
unsigned long long int var_17 = 2208251170333610243ULL;
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
