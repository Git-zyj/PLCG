#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)66;
long long int var_3 = -117504994476861766LL;
unsigned char var_7 = (unsigned char)216;
long long int var_11 = -4687218785025271647LL;
int zero = 0;
long long int var_15 = 3214868257596385747LL;
short var_16 = (short)-7931;
signed char var_17 = (signed char)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
