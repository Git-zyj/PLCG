#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)56;
unsigned long long int var_6 = 8053520509612091209ULL;
int zero = 0;
unsigned long long int var_19 = 16073443026803863995ULL;
unsigned int var_20 = 2222423745U;
unsigned int var_21 = 2515458662U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
