#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)13724;
unsigned short var_6 = (unsigned short)21002;
unsigned char var_16 = (unsigned char)241;
int var_17 = -33748278;
int zero = 0;
signed char var_18 = (signed char)6;
unsigned char var_19 = (unsigned char)29;
signed char var_20 = (signed char)29;
signed char var_21 = (signed char)-57;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
