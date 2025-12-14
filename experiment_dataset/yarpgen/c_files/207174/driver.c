#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1300934621;
unsigned short var_4 = (unsigned short)59976;
unsigned long long int var_6 = 8428205405997789377ULL;
unsigned long long int var_7 = 8571014308688768985ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)2399;
unsigned short var_12 = (unsigned short)34460;
int var_13 = 1685641799;
unsigned int var_14 = 656521181U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
