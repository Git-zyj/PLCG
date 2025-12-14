#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1217332462;
unsigned short var_16 = (unsigned short)11720;
unsigned long long int var_17 = 8472582502489083912ULL;
int zero = 0;
short var_19 = (short)15358;
unsigned short var_20 = (unsigned short)28997;
void init() {
}

void checksum() {
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
