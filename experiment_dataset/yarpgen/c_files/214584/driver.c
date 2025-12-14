#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1595274081U;
unsigned long long int var_13 = 12965209698449295923ULL;
unsigned short var_14 = (unsigned short)4939;
int zero = 0;
int var_19 = -273644261;
unsigned int var_20 = 3631400788U;
unsigned char var_21 = (unsigned char)166;
void init() {
}

void checksum() {
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
