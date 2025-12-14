#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1657560446;
int var_7 = 1559556430;
int var_9 = 2122658859;
signed char var_11 = (signed char)82;
signed char var_13 = (signed char)-9;
short var_14 = (short)31600;
int zero = 0;
signed char var_16 = (signed char)52;
short var_17 = (short)-14737;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
