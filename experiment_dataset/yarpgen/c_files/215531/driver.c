#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)38570;
unsigned short var_6 = (unsigned short)50733;
unsigned int var_8 = 3838926111U;
unsigned short var_10 = (unsigned short)59988;
long long int var_13 = 6399451576549493724LL;
int zero = 0;
unsigned int var_14 = 2729210220U;
int var_15 = -205967681;
signed char var_16 = (signed char)119;
void init() {
}

void checksum() {
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
