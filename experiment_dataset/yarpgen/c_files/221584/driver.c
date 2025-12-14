#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1368193064U;
unsigned short var_7 = (unsigned short)20890;
unsigned long long int var_10 = 2212757574551518968ULL;
signed char var_11 = (signed char)86;
int zero = 0;
short var_12 = (short)-10846;
unsigned short var_13 = (unsigned short)54332;
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
