#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6661979291028419302LL;
unsigned int var_4 = 3613499482U;
unsigned int var_8 = 2800566547U;
unsigned short var_18 = (unsigned short)32988;
int zero = 0;
short var_19 = (short)23577;
unsigned short var_20 = (unsigned short)36171;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
