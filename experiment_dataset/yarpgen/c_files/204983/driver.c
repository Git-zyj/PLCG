#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1400858270;
unsigned char var_1 = (unsigned char)181;
int var_3 = 560352195;
unsigned int var_4 = 1020835769U;
int var_8 = 529301529;
short var_12 = (short)-19458;
int zero = 0;
int var_14 = 168506166;
int var_15 = -432203990;
unsigned char var_16 = (unsigned char)47;
int var_17 = 564860149;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
