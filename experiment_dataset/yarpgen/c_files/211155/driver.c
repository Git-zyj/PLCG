#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1030733202735320177LL;
signed char var_2 = (signed char)-124;
int var_4 = -696262261;
short var_10 = (short)23328;
unsigned int var_13 = 880058822U;
int zero = 0;
unsigned int var_15 = 3412863905U;
signed char var_16 = (signed char)42;
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
