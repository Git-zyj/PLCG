#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)93;
short var_1 = (short)-3096;
unsigned char var_9 = (unsigned char)201;
int zero = 0;
unsigned long long int var_17 = 3640917637910292621ULL;
unsigned long long int var_18 = 10895599276062775318ULL;
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
