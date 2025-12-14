#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13316785184498712329ULL;
unsigned long long int var_3 = 2007746382004123230ULL;
unsigned int var_6 = 533790475U;
signed char var_7 = (signed char)68;
unsigned int var_8 = 2470742391U;
int zero = 0;
short var_10 = (short)27981;
short var_11 = (short)21290;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
