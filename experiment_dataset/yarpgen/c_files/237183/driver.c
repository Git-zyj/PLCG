#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3317675182U;
short var_12 = (short)14647;
int zero = 0;
long long int var_13 = 8789164015446466691LL;
short var_14 = (short)6294;
unsigned long long int var_15 = 3886917861162800189ULL;
short var_16 = (short)-13681;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
