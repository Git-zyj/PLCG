#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3045719014U;
short var_7 = (short)10948;
unsigned short var_13 = (unsigned short)34462;
int zero = 0;
int var_19 = 1777215754;
unsigned long long int var_20 = 3046583074016478417ULL;
unsigned long long int var_21 = 12474271889069051252ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
