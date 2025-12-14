#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)84;
unsigned char var_1 = (unsigned char)185;
unsigned int var_2 = 3896970224U;
short var_8 = (short)-24219;
unsigned long long int var_10 = 4624427621814747720ULL;
int zero = 0;
unsigned long long int var_11 = 8470307519305491824ULL;
unsigned char var_12 = (unsigned char)132;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
