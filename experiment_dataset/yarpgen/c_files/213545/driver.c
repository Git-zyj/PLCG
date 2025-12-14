#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)33573;
short var_9 = (short)1552;
unsigned long long int var_17 = 18295849436642035285ULL;
int zero = 0;
unsigned int var_19 = 2246310693U;
unsigned short var_20 = (unsigned short)58368;
unsigned int var_21 = 3767829222U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
