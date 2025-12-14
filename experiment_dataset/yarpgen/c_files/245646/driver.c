#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1319698391;
int var_4 = 935743052;
signed char var_8 = (signed char)-97;
_Bool var_12 = (_Bool)0;
int zero = 0;
signed char var_14 = (signed char)26;
int var_15 = -524756569;
unsigned short var_16 = (unsigned short)2378;
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
