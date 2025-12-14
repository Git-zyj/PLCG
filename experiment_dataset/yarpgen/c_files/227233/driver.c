#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 4268770461U;
unsigned short var_4 = (unsigned short)62421;
short var_9 = (short)-21434;
int zero = 0;
short var_13 = (short)9795;
int var_14 = 1499655972;
unsigned long long int var_15 = 532247993630399581ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
