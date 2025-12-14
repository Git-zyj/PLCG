#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)61567;
unsigned short var_3 = (unsigned short)6629;
int var_4 = -284377962;
unsigned short var_6 = (unsigned short)59847;
signed char var_7 = (signed char)56;
long long int var_10 = 7587570022016671725LL;
int zero = 0;
unsigned int var_11 = 3523104614U;
signed char var_12 = (signed char)10;
unsigned int var_13 = 473812705U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
