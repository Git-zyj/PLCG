#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -160871884;
unsigned long long int var_11 = 4636420590982955051ULL;
signed char var_12 = (signed char)42;
unsigned long long int var_14 = 13809643265046471992ULL;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)64062;
int zero = 0;
unsigned char var_17 = (unsigned char)24;
unsigned short var_18 = (unsigned short)7672;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
