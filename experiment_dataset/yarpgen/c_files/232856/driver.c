#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2924604148U;
unsigned char var_1 = (unsigned char)241;
unsigned char var_2 = (unsigned char)22;
unsigned long long int var_3 = 9452436683623684902ULL;
unsigned int var_4 = 3705037837U;
unsigned int var_5 = 2193306802U;
unsigned int var_8 = 632357305U;
unsigned int var_9 = 1120746975U;
int zero = 0;
unsigned short var_14 = (unsigned short)43357;
unsigned int var_15 = 3702539498U;
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
