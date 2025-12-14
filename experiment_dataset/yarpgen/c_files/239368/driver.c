#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)189;
unsigned long long int var_6 = 10724814513445991573ULL;
unsigned char var_8 = (unsigned char)195;
long long int var_11 = -8242076226510455866LL;
unsigned long long int var_12 = 9989925241869550365ULL;
short var_17 = (short)-30913;
int zero = 0;
int var_18 = 505022693;
long long int var_19 = 795792740555945500LL;
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
