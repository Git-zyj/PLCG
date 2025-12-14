#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 3767213840U;
unsigned short var_12 = (unsigned short)61888;
long long int var_14 = 6593888135642318433LL;
int var_15 = 798546329;
int zero = 0;
unsigned long long int var_20 = 5965923306406194138ULL;
unsigned long long int var_21 = 703847177963550765ULL;
void init() {
}

void checksum() {
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
