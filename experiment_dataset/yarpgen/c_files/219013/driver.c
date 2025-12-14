#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 3185910075U;
unsigned long long int var_9 = 5521358421585318588ULL;
int zero = 0;
short var_16 = (short)-27067;
unsigned short var_17 = (unsigned short)1233;
long long int var_18 = 2141841687795239976LL;
unsigned int var_19 = 888424237U;
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
