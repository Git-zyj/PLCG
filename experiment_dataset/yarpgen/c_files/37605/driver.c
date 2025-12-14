#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 970833405183466232LL;
long long int var_8 = -1654728780989147164LL;
signed char var_10 = (signed char)-73;
int zero = 0;
unsigned short var_13 = (unsigned short)25898;
int var_14 = 1930366129;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
