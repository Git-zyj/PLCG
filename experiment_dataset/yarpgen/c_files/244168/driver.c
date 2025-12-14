#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)3902;
short var_8 = (short)19294;
short var_9 = (short)21654;
unsigned int var_11 = 3806712938U;
int zero = 0;
short var_15 = (short)17952;
signed char var_16 = (signed char)-74;
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
