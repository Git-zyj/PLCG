#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 13819592072804767177ULL;
long long int var_8 = 4110077195584913116LL;
short var_11 = (short)-1368;
int zero = 0;
short var_19 = (short)-11728;
long long int var_20 = -6137026026610890984LL;
unsigned int var_21 = 3870772482U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
