#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 7522572963654728503ULL;
unsigned short var_12 = (unsigned short)28776;
unsigned long long int var_13 = 15045044782046948417ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)16676;
unsigned short var_18 = (unsigned short)26453;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
