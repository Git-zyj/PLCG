#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3747254381U;
short var_8 = (short)-11463;
unsigned long long int var_10 = 6672633633668827336ULL;
unsigned long long int var_11 = 15502683561313865882ULL;
int zero = 0;
unsigned long long int var_15 = 452628262215663135ULL;
short var_16 = (short)8993;
unsigned int var_17 = 257191496U;
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
