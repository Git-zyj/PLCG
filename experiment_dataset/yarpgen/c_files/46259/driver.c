#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)14701;
short var_8 = (short)-6858;
long long int var_12 = -1597921121761903631LL;
short var_13 = (short)25188;
int zero = 0;
unsigned char var_15 = (unsigned char)165;
unsigned long long int var_16 = 17042509723085717785ULL;
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
