#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)54506;
long long int var_2 = 1033056127541887066LL;
unsigned long long int var_6 = 9448227193730619677ULL;
int zero = 0;
unsigned int var_12 = 496752072U;
unsigned int var_13 = 612515510U;
signed char var_14 = (signed char)82;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
