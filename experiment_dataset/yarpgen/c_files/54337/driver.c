#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 18063337399352356514ULL;
int var_4 = -827473440;
unsigned int var_6 = 598323942U;
short var_7 = (short)26315;
unsigned long long int var_8 = 17982715955494932280ULL;
short var_11 = (short)9924;
int zero = 0;
unsigned long long int var_15 = 11790423348435799993ULL;
short var_16 = (short)535;
void init() {
}

void checksum() {
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
