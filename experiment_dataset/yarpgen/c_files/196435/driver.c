#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1647930206;
signed char var_3 = (signed char)76;
short var_4 = (short)16785;
long long int var_11 = 8871185474253890863LL;
int zero = 0;
short var_14 = (short)-24144;
unsigned int var_15 = 1858249683U;
long long int var_16 = -7568224973710153869LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
