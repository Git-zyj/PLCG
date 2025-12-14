#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9350411652104100696ULL;
unsigned char var_3 = (unsigned char)169;
signed char var_7 = (signed char)52;
unsigned long long int var_9 = 3082743154409037070ULL;
unsigned char var_12 = (unsigned char)244;
int zero = 0;
short var_13 = (short)-22888;
unsigned char var_14 = (unsigned char)243;
unsigned long long int var_15 = 10876393846293745070ULL;
unsigned int var_16 = 1158968218U;
unsigned char var_17 = (unsigned char)49;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
