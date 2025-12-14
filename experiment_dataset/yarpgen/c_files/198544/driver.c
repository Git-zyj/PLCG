#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)89;
unsigned int var_3 = 816505706U;
unsigned int var_8 = 2587487290U;
unsigned short var_12 = (unsigned short)24775;
long long int var_13 = -1896134721184805395LL;
int zero = 0;
unsigned int var_15 = 1785551705U;
short var_16 = (short)-2151;
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
