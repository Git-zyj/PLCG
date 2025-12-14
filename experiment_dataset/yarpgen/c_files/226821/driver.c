#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1791047411;
unsigned int var_6 = 589387585U;
unsigned int var_8 = 710556915U;
unsigned int var_11 = 3829659365U;
signed char var_12 = (signed char)75;
int zero = 0;
unsigned long long int var_16 = 4235115129812094687ULL;
signed char var_17 = (signed char)-62;
void init() {
}

void checksum() {
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
