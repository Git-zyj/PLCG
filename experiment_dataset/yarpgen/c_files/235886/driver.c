#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)10133;
unsigned long long int var_2 = 8965358310318219680ULL;
long long int var_7 = -6920108794571343705LL;
unsigned short var_13 = (unsigned short)1414;
int zero = 0;
int var_14 = -960143450;
unsigned long long int var_15 = 13579400458229973698ULL;
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
