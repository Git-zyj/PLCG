#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-27;
unsigned short var_3 = (unsigned short)25275;
unsigned short var_5 = (unsigned short)47646;
long long int var_8 = -2505931384898332730LL;
int zero = 0;
short var_10 = (short)19365;
int var_11 = 1637351535;
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
