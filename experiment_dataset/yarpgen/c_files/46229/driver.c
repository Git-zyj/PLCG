#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)34763;
unsigned short var_2 = (unsigned short)35919;
unsigned short var_4 = (unsigned short)46272;
unsigned int var_6 = 860017217U;
unsigned short var_12 = (unsigned short)12805;
short var_15 = (short)-2297;
int zero = 0;
int var_19 = 809120945;
long long int var_20 = -6505730610893851136LL;
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
