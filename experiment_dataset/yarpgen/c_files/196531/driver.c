#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-108;
long long int var_8 = 5654895189304048453LL;
int var_16 = 456473619;
int var_17 = -514800802;
int zero = 0;
unsigned short var_18 = (unsigned short)21278;
int var_19 = 309124004;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
