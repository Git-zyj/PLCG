#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)58973;
unsigned long long int var_5 = 3847945962345311776ULL;
short var_9 = (short)14972;
short var_14 = (short)-330;
short var_17 = (short)-11179;
short var_18 = (short)12280;
int zero = 0;
unsigned char var_19 = (unsigned char)96;
short var_20 = (short)10793;
signed char var_21 = (signed char)-33;
long long int var_22 = 3189379207518993796LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
