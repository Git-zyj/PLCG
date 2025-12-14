#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-16420;
unsigned short var_9 = (unsigned short)24784;
signed char var_12 = (signed char)-125;
unsigned int var_14 = 2329218986U;
int zero = 0;
unsigned int var_17 = 337087376U;
unsigned long long int var_18 = 11296883160701220124ULL;
unsigned short var_19 = (unsigned short)10340;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
