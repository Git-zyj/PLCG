#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)114;
short var_4 = (short)-29374;
unsigned int var_6 = 1577202697U;
short var_7 = (short)-20073;
int zero = 0;
short var_11 = (short)-23549;
short var_12 = (short)-10197;
int var_13 = 1831966962;
unsigned int var_14 = 3678980867U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
