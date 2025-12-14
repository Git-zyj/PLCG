#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-58;
short var_6 = (short)-24912;
unsigned long long int var_8 = 1766019317787883568ULL;
unsigned int var_12 = 2578322637U;
int zero = 0;
long long int var_18 = -7236389985664074331LL;
long long int var_19 = 2801030805218186843LL;
void init() {
}

void checksum() {
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
