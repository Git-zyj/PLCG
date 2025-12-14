#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)31498;
int var_2 = 1409806913;
int var_9 = -460533948;
unsigned long long int var_13 = 11906584531771131823ULL;
unsigned long long int var_14 = 7132011671849414724ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)62;
unsigned long long int var_16 = 4999088117060191023ULL;
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
