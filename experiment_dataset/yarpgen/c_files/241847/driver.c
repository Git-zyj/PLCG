#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2029049003;
unsigned long long int var_7 = 16311780892639343652ULL;
unsigned short var_14 = (unsigned short)52940;
unsigned char var_15 = (unsigned char)222;
int zero = 0;
unsigned int var_20 = 1792713798U;
unsigned int var_21 = 563170905U;
unsigned int var_22 = 609906013U;
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
