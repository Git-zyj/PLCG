#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)66;
unsigned char var_6 = (unsigned char)193;
int var_7 = 660684040;
int zero = 0;
unsigned int var_10 = 3188388699U;
short var_11 = (short)-22677;
unsigned long long int var_12 = 3547299399290644459ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
