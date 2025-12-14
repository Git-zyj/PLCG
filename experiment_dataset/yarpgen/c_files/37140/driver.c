#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2235609939257145224LL;
int var_2 = -2045835865;
signed char var_3 = (signed char)100;
unsigned char var_5 = (unsigned char)222;
short var_7 = (short)14923;
unsigned short var_9 = (unsigned short)18866;
unsigned short var_11 = (unsigned short)14047;
int zero = 0;
signed char var_13 = (signed char)103;
unsigned char var_14 = (unsigned char)47;
short var_15 = (short)214;
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
