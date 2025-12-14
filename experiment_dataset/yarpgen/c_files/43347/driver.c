#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-7392;
unsigned short var_14 = (unsigned short)37678;
unsigned short var_17 = (unsigned short)32357;
unsigned long long int var_18 = 9911828855020418008ULL;
int zero = 0;
unsigned int var_19 = 3309152327U;
signed char var_20 = (signed char)-120;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
