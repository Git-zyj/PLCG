#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3289754556U;
unsigned short var_6 = (unsigned short)36151;
unsigned long long int var_12 = 193118025897233753ULL;
unsigned int var_15 = 1644182533U;
unsigned long long int var_18 = 9533043270225695215ULL;
int zero = 0;
unsigned long long int var_19 = 17483105912558376454ULL;
short var_20 = (short)4241;
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
