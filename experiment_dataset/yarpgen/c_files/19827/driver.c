#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)33001;
unsigned short var_6 = (unsigned short)24206;
unsigned short var_7 = (unsigned short)50781;
unsigned short var_8 = (unsigned short)65478;
unsigned long long int var_9 = 16187945548148757722ULL;
unsigned short var_11 = (unsigned short)50366;
int zero = 0;
signed char var_13 = (signed char)33;
unsigned short var_14 = (unsigned short)45834;
signed char var_15 = (signed char)83;
unsigned short var_16 = (unsigned short)41954;
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
