#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4029419192U;
short var_5 = (short)15651;
unsigned int var_7 = 874908559U;
short var_11 = (short)9131;
int zero = 0;
unsigned long long int var_12 = 8347556237948999375ULL;
unsigned char var_13 = (unsigned char)42;
void init() {
}

void checksum() {
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
