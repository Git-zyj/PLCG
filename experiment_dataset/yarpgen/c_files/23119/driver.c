#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1539365329U;
int var_6 = -2145755443;
long long int var_8 = 7217028107715968310LL;
unsigned char var_11 = (unsigned char)187;
int zero = 0;
short var_13 = (short)18134;
short var_14 = (short)21466;
unsigned char var_15 = (unsigned char)142;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
