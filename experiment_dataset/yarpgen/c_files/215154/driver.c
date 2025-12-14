#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-15269;
unsigned int var_4 = 4035046601U;
signed char var_5 = (signed char)92;
signed char var_9 = (signed char)-84;
signed char var_11 = (signed char)(-127 - 1);
unsigned short var_12 = (unsigned short)61551;
int zero = 0;
unsigned short var_14 = (unsigned short)13785;
unsigned short var_15 = (unsigned short)20016;
unsigned long long int var_16 = 16534790918524191694ULL;
short var_17 = (short)-14672;
unsigned short var_18 = (unsigned short)34813;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
