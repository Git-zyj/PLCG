#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24261;
unsigned short var_3 = (unsigned short)32128;
long long int var_12 = 1921314493028942254LL;
int var_14 = -897423433;
int zero = 0;
unsigned int var_15 = 2988746389U;
unsigned long long int var_16 = 13902322652979406639ULL;
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
