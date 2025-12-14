#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_6 = (_Bool)0;
short var_7 = (short)-29244;
unsigned short var_9 = (unsigned short)3236;
int var_11 = 1462451025;
int zero = 0;
unsigned short var_12 = (unsigned short)61320;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)13511;
unsigned long long int var_15 = 16584441738444267387ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
