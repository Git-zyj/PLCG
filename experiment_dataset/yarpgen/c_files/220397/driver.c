#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)69;
short var_1 = (short)16222;
unsigned long long int var_5 = 7511991204342059247ULL;
unsigned long long int var_7 = 5027214411643586120ULL;
int zero = 0;
unsigned int var_11 = 3489644017U;
long long int var_12 = 303906843201616216LL;
short var_13 = (short)-11301;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
