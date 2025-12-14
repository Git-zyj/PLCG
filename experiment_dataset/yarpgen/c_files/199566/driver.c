#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-17;
long long int var_7 = 8120914008163588780LL;
unsigned int var_11 = 1463470575U;
int zero = 0;
unsigned long long int var_14 = 3137623565464429072ULL;
short var_15 = (short)-10164;
void init() {
}

void checksum() {
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
