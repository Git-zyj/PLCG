#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -4843116664963090805LL;
unsigned int var_8 = 3947067140U;
unsigned int var_9 = 543711991U;
int zero = 0;
unsigned char var_11 = (unsigned char)132;
int var_12 = -1258566501;
signed char var_13 = (signed char)-67;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
