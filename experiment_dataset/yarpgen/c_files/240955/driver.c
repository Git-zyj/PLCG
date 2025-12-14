#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2337981972U;
int var_9 = 805755596;
signed char var_10 = (signed char)-14;
unsigned char var_13 = (unsigned char)14;
int var_14 = -227196216;
short var_16 = (short)-29140;
unsigned long long int var_19 = 1952030646830897906ULL;
int zero = 0;
signed char var_20 = (signed char)-37;
unsigned char var_21 = (unsigned char)44;
unsigned char var_22 = (unsigned char)51;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
