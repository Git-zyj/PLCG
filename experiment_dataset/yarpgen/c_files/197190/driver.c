#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-35;
unsigned short var_3 = (unsigned short)36460;
unsigned char var_9 = (unsigned char)160;
short var_10 = (short)25847;
int zero = 0;
short var_11 = (short)-19654;
int var_12 = 96089627;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
