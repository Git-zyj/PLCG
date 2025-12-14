#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1972217417879176116LL;
unsigned long long int var_4 = 15379915166559652236ULL;
unsigned char var_6 = (unsigned char)145;
unsigned char var_10 = (unsigned char)75;
unsigned short var_15 = (unsigned short)27022;
int zero = 0;
short var_17 = (short)-561;
unsigned short var_18 = (unsigned short)23266;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
