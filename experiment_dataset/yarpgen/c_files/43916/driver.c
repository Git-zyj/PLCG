#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)127;
signed char var_4 = (signed char)-96;
unsigned short var_7 = (unsigned short)49462;
signed char var_10 = (signed char)-82;
int var_13 = -321357826;
int zero = 0;
signed char var_14 = (signed char)27;
short var_15 = (short)13405;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
