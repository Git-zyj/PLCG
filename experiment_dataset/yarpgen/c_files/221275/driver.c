#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -3183720170675434870LL;
short var_6 = (short)-22047;
unsigned char var_8 = (unsigned char)254;
unsigned char var_9 = (unsigned char)226;
int zero = 0;
int var_11 = -1239523446;
int var_12 = -917501612;
long long int var_13 = -2025918584373965979LL;
short var_14 = (short)-25757;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
