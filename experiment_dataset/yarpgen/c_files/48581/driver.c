#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)29187;
long long int var_12 = 8194545760875775661LL;
int zero = 0;
unsigned int var_17 = 2853534516U;
unsigned short var_18 = (unsigned short)47469;
unsigned long long int var_19 = 11712451482444003482ULL;
long long int var_20 = -6909429701967028836LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
