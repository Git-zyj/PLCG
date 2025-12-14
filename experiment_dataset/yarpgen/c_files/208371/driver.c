#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)7783;
signed char var_3 = (signed char)-7;
unsigned long long int var_5 = 2624552951963112174ULL;
int zero = 0;
signed char var_12 = (signed char)-104;
short var_13 = (short)32387;
void init() {
}

void checksum() {
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
