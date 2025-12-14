#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)31718;
unsigned short var_6 = (unsigned short)16926;
long long int var_9 = 1296874206599421761LL;
signed char var_11 = (signed char)28;
signed char var_12 = (signed char)29;
int zero = 0;
int var_15 = 1806584208;
short var_16 = (short)4497;
unsigned long long int var_17 = 210729628971004584ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
