#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 6723687772616921968ULL;
unsigned long long int var_7 = 11235679190120246895ULL;
short var_8 = (short)-22344;
int zero = 0;
unsigned long long int var_10 = 18139312864226079579ULL;
unsigned long long int var_11 = 12791387757499973970ULL;
unsigned long long int var_12 = 5440780951226903991ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
