#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-55;
signed char var_2 = (signed char)-23;
short var_10 = (short)-21316;
short var_13 = (short)24188;
int zero = 0;
long long int var_15 = -3210636480167089722LL;
long long int var_16 = -6866772906596383253LL;
void init() {
}

void checksum() {
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
