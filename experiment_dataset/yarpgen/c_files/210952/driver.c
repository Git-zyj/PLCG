#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)48858;
unsigned long long int var_4 = 17763076899755853491ULL;
unsigned char var_5 = (unsigned char)168;
short var_7 = (short)8697;
int var_9 = -1757225712;
int zero = 0;
signed char var_11 = (signed char)-105;
unsigned short var_12 = (unsigned short)47398;
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
