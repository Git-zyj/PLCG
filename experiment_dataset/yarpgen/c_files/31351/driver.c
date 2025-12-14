#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1041615514U;
unsigned long long int var_7 = 16610076403251174914ULL;
unsigned char var_12 = (unsigned char)226;
int zero = 0;
signed char var_13 = (signed char)-56;
unsigned long long int var_14 = 386965621234068119ULL;
signed char var_15 = (signed char)-8;
signed char var_16 = (signed char)20;
unsigned short var_17 = (unsigned short)16642;
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
