#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-25997;
signed char var_3 = (signed char)-10;
signed char var_7 = (signed char)-86;
short var_10 = (short)9028;
int zero = 0;
signed char var_12 = (signed char)74;
short var_13 = (short)-18286;
short var_14 = (short)29602;
short var_15 = (short)-26721;
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
