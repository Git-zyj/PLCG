#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 4868065936178600947LL;
signed char var_4 = (signed char)-36;
short var_11 = (short)-13509;
int zero = 0;
unsigned short var_13 = (unsigned short)28941;
short var_14 = (short)31732;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
