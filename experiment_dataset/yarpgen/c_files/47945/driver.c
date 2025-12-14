#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)107;
int var_4 = -5488440;
unsigned int var_6 = 1188800057U;
short var_7 = (short)24789;
unsigned char var_10 = (unsigned char)96;
unsigned char var_11 = (unsigned char)133;
short var_13 = (short)-27368;
unsigned int var_15 = 203756331U;
unsigned int var_16 = 3405682043U;
int zero = 0;
unsigned long long int var_20 = 3105419068141728234ULL;
long long int var_21 = 4377604618889532046LL;
long long int var_22 = 7454174958514524397LL;
short var_23 = (short)-14572;
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
