#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 361985393;
unsigned short var_2 = (unsigned short)6921;
signed char var_4 = (signed char)-105;
short var_7 = (short)32590;
signed char var_11 = (signed char)-37;
int zero = 0;
unsigned long long int var_12 = 9095575712005781041ULL;
unsigned long long int var_13 = 8973432366356708916ULL;
signed char var_14 = (signed char)9;
signed char var_15 = (signed char)48;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
