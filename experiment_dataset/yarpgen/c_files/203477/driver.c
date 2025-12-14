#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 250474170U;
unsigned long long int var_5 = 1237130243078141991ULL;
short var_8 = (short)-15170;
unsigned long long int var_14 = 685448883960901817ULL;
int zero = 0;
unsigned long long int var_15 = 4109684775381342140ULL;
int var_16 = 1356939392;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
