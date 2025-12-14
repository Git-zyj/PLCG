#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -9153058436052745870LL;
int var_8 = 905348106;
short var_12 = (short)1177;
short var_16 = (short)-8509;
int zero = 0;
long long int var_19 = 2859474579301967584LL;
unsigned short var_20 = (unsigned short)35867;
void init() {
}

void checksum() {
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
