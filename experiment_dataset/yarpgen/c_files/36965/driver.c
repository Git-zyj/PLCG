#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 635830299;
short var_6 = (short)-6942;
int var_7 = 1330313116;
long long int var_10 = -7290695923164069530LL;
int zero = 0;
int var_14 = 548477473;
short var_15 = (short)-12638;
int var_16 = -737475864;
void init() {
}

void checksum() {
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
