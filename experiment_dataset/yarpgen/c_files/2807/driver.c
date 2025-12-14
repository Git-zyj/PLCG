#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)64;
int var_7 = -758083969;
unsigned short var_9 = (unsigned short)55898;
unsigned short var_12 = (unsigned short)11915;
long long int var_14 = 5196041214358768029LL;
long long int var_15 = -2452980713392446397LL;
int zero = 0;
int var_16 = 1121185802;
long long int var_17 = -4846395890369948785LL;
short var_18 = (short)1185;
void init() {
}

void checksum() {
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
