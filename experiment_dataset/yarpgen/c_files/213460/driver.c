#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1727417548U;
unsigned int var_1 = 3455742199U;
unsigned short var_5 = (unsigned short)22641;
int var_7 = 732931706;
int zero = 0;
unsigned char var_14 = (unsigned char)161;
int var_15 = 578872939;
unsigned int var_16 = 1418011311U;
unsigned long long int var_17 = 16766641941383560080ULL;
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
