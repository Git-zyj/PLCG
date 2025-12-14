#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-68;
unsigned char var_6 = (unsigned char)146;
unsigned int var_11 = 771956764U;
int zero = 0;
unsigned char var_15 = (unsigned char)122;
long long int var_16 = 8585000131733417888LL;
short var_17 = (short)4166;
short var_18 = (short)11022;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
