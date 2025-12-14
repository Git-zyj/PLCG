#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)4;
unsigned int var_11 = 2445613886U;
unsigned short var_15 = (unsigned short)14591;
int zero = 0;
unsigned int var_16 = 3155706518U;
short var_17 = (short)-2978;
long long int var_18 = 5445167414347896742LL;
unsigned int var_19 = 3551984513U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
