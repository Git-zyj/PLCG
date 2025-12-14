#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 1828264537969889083ULL;
unsigned long long int var_6 = 7651030972024594278ULL;
_Bool var_10 = (_Bool)1;
int zero = 0;
short var_16 = (short)31954;
short var_17 = (short)-19062;
short var_18 = (short)-11577;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
