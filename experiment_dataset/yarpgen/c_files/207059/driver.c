#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-122;
short var_2 = (short)9634;
short var_3 = (short)11502;
unsigned int var_5 = 3737268373U;
short var_10 = (short)13101;
int var_11 = 1188160370;
unsigned long long int var_13 = 1252648137535971210ULL;
unsigned long long int var_15 = 7439329538129025812ULL;
int zero = 0;
unsigned long long int var_16 = 7262075845206130625ULL;
unsigned int var_17 = 307787822U;
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
