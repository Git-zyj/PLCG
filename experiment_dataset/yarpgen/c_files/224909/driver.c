#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 14732825103235233790ULL;
short var_11 = (short)8925;
unsigned char var_12 = (unsigned char)141;
long long int var_13 = 7730893331363328770LL;
int zero = 0;
unsigned int var_17 = 866818780U;
int var_18 = 1021842095;
unsigned long long int var_19 = 89279354693881055ULL;
long long int var_20 = 3663331604893667037LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
