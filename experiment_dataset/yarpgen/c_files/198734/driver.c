#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1089461346198608048ULL;
signed char var_4 = (signed char)-68;
short var_6 = (short)28792;
signed char var_7 = (signed char)125;
int var_8 = -1130447112;
unsigned short var_10 = (unsigned short)39733;
int zero = 0;
unsigned short var_12 = (unsigned short)55195;
unsigned int var_13 = 1935890299U;
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
