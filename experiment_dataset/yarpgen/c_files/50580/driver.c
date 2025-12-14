#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1271634869U;
unsigned long long int var_12 = 2263711358921565272ULL;
unsigned int var_13 = 1315830695U;
int zero = 0;
long long int var_15 = -594489429951338764LL;
long long int var_16 = -1763564843774032609LL;
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
