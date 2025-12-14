#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-28176;
signed char var_4 = (signed char)116;
short var_6 = (short)20247;
signed char var_7 = (signed char)90;
int zero = 0;
signed char var_12 = (signed char)-125;
short var_13 = (short)31405;
void init() {
}

void checksum() {
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
