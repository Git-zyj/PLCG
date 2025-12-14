#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)27751;
int var_8 = -1546256179;
long long int var_9 = 357457199699031967LL;
unsigned char var_11 = (unsigned char)237;
long long int var_12 = -8554875100392847210LL;
int zero = 0;
short var_13 = (short)-844;
unsigned short var_14 = (unsigned short)18681;
long long int var_15 = 6488306711091478326LL;
unsigned long long int var_16 = 6143358132228740923ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
