#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4044728115U;
short var_5 = (short)-15580;
short var_10 = (short)-17396;
unsigned long long int var_13 = 2674843614520775747ULL;
short var_17 = (short)20810;
unsigned int var_19 = 302141147U;
int zero = 0;
unsigned long long int var_20 = 5053750265024859907ULL;
unsigned long long int var_21 = 7024930231850573790ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
