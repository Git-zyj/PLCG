#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)24;
signed char var_5 = (signed char)53;
int zero = 0;
long long int var_10 = -8174459901620697770LL;
long long int var_11 = 3095166871512033963LL;
signed char var_12 = (signed char)-5;
short var_13 = (short)8905;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
