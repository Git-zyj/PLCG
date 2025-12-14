#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1123013170;
int var_4 = 1338626196;
long long int var_5 = -2382280020380848989LL;
short var_7 = (short)26577;
int var_8 = 1509525546;
short var_10 = (short)32442;
int zero = 0;
long long int var_11 = 2139467130719766270LL;
unsigned short var_12 = (unsigned short)15408;
void init() {
}

void checksum() {
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
