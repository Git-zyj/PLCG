#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2885472669U;
unsigned short var_5 = (unsigned short)25053;
short var_15 = (short)19168;
int zero = 0;
unsigned short var_18 = (unsigned short)18245;
unsigned int var_19 = 370301510U;
short var_20 = (short)1600;
void init() {
}

void checksum() {
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
