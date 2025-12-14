#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1066504270;
long long int var_4 = 779621185782272230LL;
short var_7 = (short)-31480;
int var_9 = 466098459;
short var_10 = (short)-7625;
unsigned int var_11 = 4106306655U;
int zero = 0;
short var_17 = (short)-22411;
unsigned short var_18 = (unsigned short)10198;
long long int var_19 = 9171337668850104109LL;
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
