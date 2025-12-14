#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)9;
unsigned int var_4 = 409180484U;
unsigned int var_5 = 798354977U;
unsigned short var_7 = (unsigned short)34665;
unsigned long long int var_14 = 14037580787554969058ULL;
int zero = 0;
short var_15 = (short)28498;
unsigned long long int var_16 = 10485681313176890126ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
