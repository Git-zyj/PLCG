#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1998198448;
unsigned short var_9 = (unsigned short)43342;
int zero = 0;
long long int var_11 = -4670718485705137269LL;
unsigned long long int var_12 = 1127614685281301720ULL;
unsigned int var_13 = 1052366247U;
int var_14 = -1145766354;
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
