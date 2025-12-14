#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1259175508881986246LL;
short var_10 = (short)-27523;
signed char var_11 = (signed char)18;
signed char var_15 = (signed char)24;
short var_16 = (short)28341;
int zero = 0;
short var_17 = (short)1734;
short var_18 = (short)-18263;
signed char var_19 = (signed char)10;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
