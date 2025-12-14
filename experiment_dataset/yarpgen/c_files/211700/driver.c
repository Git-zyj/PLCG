#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-65;
unsigned short var_9 = (unsigned short)24962;
int zero = 0;
unsigned int var_15 = 489126303U;
signed char var_16 = (signed char)-36;
unsigned short var_17 = (unsigned short)8252;
unsigned long long int var_18 = 16805667439253802660ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
