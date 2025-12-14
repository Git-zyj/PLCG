#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_12 = (signed char)74;
unsigned short var_13 = (unsigned short)32542;
unsigned long long int var_16 = 10588278832180064681ULL;
int zero = 0;
unsigned int var_20 = 490857214U;
short var_21 = (short)-6886;
unsigned int var_22 = 3026427453U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
