#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)155;
short var_3 = (short)-587;
unsigned long long int var_8 = 10166414057125720319ULL;
unsigned long long int var_10 = 8654154340756771248ULL;
signed char var_15 = (signed char)-22;
signed char var_17 = (signed char)33;
int zero = 0;
unsigned int var_18 = 1935381241U;
unsigned char var_19 = (unsigned char)236;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
