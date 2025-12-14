#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)213;
unsigned long long int var_4 = 5372988394517181638ULL;
long long int var_10 = -8766562878501381626LL;
int zero = 0;
short var_14 = (short)15646;
long long int var_15 = -7047514523820646242LL;
unsigned char var_16 = (unsigned char)222;
unsigned long long int var_17 = 17613465968158253118ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
