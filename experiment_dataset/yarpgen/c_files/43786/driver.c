#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 257102788;
unsigned int var_9 = 1939509113U;
unsigned long long int var_16 = 7530810804126004296ULL;
int zero = 0;
signed char var_19 = (signed char)118;
unsigned long long int var_20 = 14580691441523580190ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
