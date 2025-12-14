#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)97;
signed char var_6 = (signed char)18;
short var_12 = (short)-16800;
short var_14 = (short)-9804;
short var_16 = (short)-20642;
int zero = 0;
signed char var_19 = (signed char)-28;
unsigned char var_20 = (unsigned char)119;
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
