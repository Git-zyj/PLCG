#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)14632;
unsigned int var_2 = 988647895U;
short var_3 = (short)-30808;
int var_4 = 827729495;
short var_7 = (short)-12399;
int zero = 0;
int var_13 = -1966967714;
unsigned long long int var_14 = 12422378602720050682ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
