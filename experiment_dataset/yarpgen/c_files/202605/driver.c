#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -336455685;
int var_4 = 1317005587;
signed char var_5 = (signed char)-75;
unsigned int var_11 = 1831784815U;
unsigned char var_12 = (unsigned char)167;
int zero = 0;
unsigned long long int var_14 = 3555515673135371809ULL;
short var_15 = (short)-5798;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
