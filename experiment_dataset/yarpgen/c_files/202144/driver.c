#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)34542;
signed char var_7 = (signed char)4;
unsigned char var_9 = (unsigned char)68;
unsigned char var_10 = (unsigned char)176;
unsigned long long int var_13 = 2470430340651810051ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)42604;
int var_15 = 309988014;
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
