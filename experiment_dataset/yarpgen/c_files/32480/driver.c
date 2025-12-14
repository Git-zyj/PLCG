#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-15319;
long long int var_8 = 3620650384867221011LL;
unsigned long long int var_12 = 12082660284569900177ULL;
int zero = 0;
signed char var_16 = (signed char)-10;
signed char var_17 = (signed char)41;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
