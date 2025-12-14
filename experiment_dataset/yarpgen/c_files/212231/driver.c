#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)63975;
short var_7 = (short)-22371;
unsigned int var_11 = 2477690109U;
int zero = 0;
short var_16 = (short)22340;
unsigned long long int var_17 = 21146654396117591ULL;
unsigned int var_18 = 1923864521U;
int var_19 = 1519438417;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
