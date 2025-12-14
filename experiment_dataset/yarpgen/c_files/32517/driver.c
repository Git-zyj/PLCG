#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -2681270731625076205LL;
unsigned char var_10 = (unsigned char)122;
signed char var_11 = (signed char)-9;
unsigned char var_16 = (unsigned char)54;
int zero = 0;
unsigned int var_17 = 3242153416U;
unsigned int var_18 = 2202213893U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
