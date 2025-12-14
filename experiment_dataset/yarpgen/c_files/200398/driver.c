#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_15 = 8386287597573353505LL;
unsigned char var_16 = (unsigned char)122;
int zero = 0;
unsigned long long int var_17 = 6984202659632342443ULL;
unsigned long long int var_18 = 17740038220674366773ULL;
void init() {
}

void checksum() {
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
