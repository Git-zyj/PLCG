#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 44647659U;
unsigned int var_3 = 3775759628U;
signed char var_9 = (signed char)-68;
unsigned int var_10 = 1905508338U;
unsigned long long int var_14 = 13978270614259143097ULL;
int zero = 0;
unsigned long long int var_16 = 18127434343189242071ULL;
unsigned int var_17 = 3690251916U;
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
