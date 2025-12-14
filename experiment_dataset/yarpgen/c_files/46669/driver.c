#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)61401;
unsigned char var_2 = (unsigned char)238;
signed char var_6 = (signed char)118;
unsigned short var_9 = (unsigned short)10473;
signed char var_11 = (signed char)20;
int zero = 0;
signed char var_20 = (signed char)30;
unsigned int var_21 = 1191888558U;
unsigned short var_22 = (unsigned short)22360;
unsigned char var_23 = (unsigned char)92;
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
