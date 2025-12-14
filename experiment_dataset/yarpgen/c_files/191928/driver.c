#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-14669;
short var_3 = (short)210;
unsigned long long int var_5 = 12354670609043674279ULL;
unsigned long long int var_7 = 1331367990889441429ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)71;
unsigned int var_16 = 293908739U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
