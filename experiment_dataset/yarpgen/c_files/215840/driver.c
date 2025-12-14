#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)117;
short var_9 = (short)-20819;
signed char var_14 = (signed char)30;
unsigned long long int var_15 = 10550006076348231473ULL;
signed char var_17 = (signed char)-125;
int zero = 0;
int var_20 = 1368942051;
signed char var_21 = (signed char)108;
void init() {
}

void checksum() {
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
