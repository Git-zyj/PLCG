#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)6105;
long long int var_2 = 147099436881816929LL;
long long int var_6 = 8190403391953011118LL;
short var_7 = (short)4638;
int zero = 0;
unsigned int var_10 = 3673256357U;
unsigned short var_11 = (unsigned short)40444;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
