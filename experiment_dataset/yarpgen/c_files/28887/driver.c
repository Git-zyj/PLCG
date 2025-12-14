#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -2525625261602548199LL;
short var_7 = (short)-17361;
long long int var_9 = 1772412315269741642LL;
short var_11 = (short)16779;
int zero = 0;
short var_16 = (short)-29737;
int var_17 = 171008960;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
