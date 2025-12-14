#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = -708011526;
unsigned long long int var_15 = 1429293417449858208ULL;
int zero = 0;
short var_19 = (short)9894;
short var_20 = (short)-12596;
short var_21 = (short)-10620;
unsigned int var_22 = 456613497U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
