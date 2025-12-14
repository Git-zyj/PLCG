#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-16;
signed char var_12 = (signed char)36;
unsigned short var_17 = (unsigned short)15284;
int zero = 0;
unsigned long long int var_20 = 8865699153694351537ULL;
unsigned char var_21 = (unsigned char)84;
int var_22 = -2101866160;
short var_23 = (short)-23081;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
