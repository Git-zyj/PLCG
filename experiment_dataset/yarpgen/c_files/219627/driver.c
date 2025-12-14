#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-111;
unsigned short var_5 = (unsigned short)16935;
signed char var_11 = (signed char)-75;
int zero = 0;
short var_13 = (short)22011;
unsigned short var_14 = (unsigned short)24382;
signed char var_15 = (signed char)124;
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
