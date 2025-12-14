#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1906473532;
int var_6 = 1276433387;
short var_11 = (short)-22569;
long long int var_12 = -8779442913209668748LL;
short var_16 = (short)5043;
int zero = 0;
int var_17 = 1605378172;
int var_18 = -854298635;
int var_19 = 2085029784;
void init() {
}

void checksum() {
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
