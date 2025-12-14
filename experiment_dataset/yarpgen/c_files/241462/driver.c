#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)37959;
unsigned short var_2 = (unsigned short)50833;
unsigned short var_4 = (unsigned short)21613;
unsigned short var_5 = (unsigned short)58923;
unsigned short var_8 = (unsigned short)28447;
unsigned short var_12 = (unsigned short)46721;
int zero = 0;
unsigned short var_14 = (unsigned short)23543;
unsigned short var_15 = (unsigned short)34873;
unsigned short var_16 = (unsigned short)47715;
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
