#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_12 = -428189354;
int var_14 = -470892987;
unsigned char var_16 = (unsigned char)13;
int zero = 0;
unsigned long long int var_17 = 12808314591765586406ULL;
unsigned int var_18 = 2149369357U;
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
