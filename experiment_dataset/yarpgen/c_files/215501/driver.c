#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)56408;
signed char var_9 = (signed char)29;
int var_13 = 1071705638;
unsigned char var_14 = (unsigned char)204;
int zero = 0;
short var_15 = (short)15242;
unsigned char var_16 = (unsigned char)114;
signed char var_17 = (signed char)-96;
void init() {
}

void checksum() {
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
