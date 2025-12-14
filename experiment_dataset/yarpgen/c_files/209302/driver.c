#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)60;
long long int var_4 = -4596592955394619908LL;
short var_6 = (short)-21404;
unsigned long long int var_9 = 2391792872782482629ULL;
unsigned int var_10 = 3054115967U;
int zero = 0;
unsigned char var_11 = (unsigned char)39;
signed char var_12 = (signed char)76;
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
