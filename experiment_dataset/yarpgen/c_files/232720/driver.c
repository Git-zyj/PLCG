#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -4485101487727112254LL;
long long int var_10 = -6325529126886508728LL;
int zero = 0;
unsigned short var_12 = (unsigned short)10289;
unsigned long long int var_13 = 3178259539875512473ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
