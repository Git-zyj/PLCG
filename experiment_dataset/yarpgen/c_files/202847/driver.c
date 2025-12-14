#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1879862575;
unsigned long long int var_5 = 1424492817067821187ULL;
short var_6 = (short)-32392;
signed char var_11 = (signed char)-24;
int zero = 0;
unsigned char var_13 = (unsigned char)20;
signed char var_14 = (signed char)82;
void init() {
}

void checksum() {
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
