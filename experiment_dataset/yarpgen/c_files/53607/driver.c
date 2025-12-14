#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)9086;
signed char var_10 = (signed char)9;
short var_11 = (short)25153;
int zero = 0;
unsigned short var_13 = (unsigned short)58931;
unsigned char var_14 = (unsigned char)225;
int var_15 = 92487497;
void init() {
}

void checksum() {
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
