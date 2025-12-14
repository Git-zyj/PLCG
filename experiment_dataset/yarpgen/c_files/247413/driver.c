#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -506119673;
unsigned short var_7 = (unsigned short)37996;
short var_10 = (short)-30991;
int zero = 0;
unsigned int var_13 = 1102702909U;
signed char var_14 = (signed char)68;
unsigned short var_15 = (unsigned short)33817;
void init() {
}

void checksum() {
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
