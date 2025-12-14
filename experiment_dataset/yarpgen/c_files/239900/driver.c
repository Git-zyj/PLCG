#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18167;
unsigned short var_2 = (unsigned short)56914;
unsigned char var_3 = (unsigned char)3;
unsigned short var_4 = (unsigned short)21145;
unsigned int var_8 = 4219346860U;
int var_9 = 1511222458;
unsigned short var_10 = (unsigned short)54737;
int zero = 0;
short var_14 = (short)-28140;
unsigned long long int var_15 = 3721352338327775663ULL;
unsigned int var_16 = 2672702132U;
unsigned short var_17 = (unsigned short)40655;
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
