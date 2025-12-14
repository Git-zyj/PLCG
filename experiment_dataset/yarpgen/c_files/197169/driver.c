#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5522811199860008032ULL;
unsigned short var_3 = (unsigned short)50872;
short var_4 = (short)-8661;
short var_6 = (short)30071;
int var_7 = 1145100166;
int zero = 0;
signed char var_11 = (signed char)-77;
unsigned short var_12 = (unsigned short)21064;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
