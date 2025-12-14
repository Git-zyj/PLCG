#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-29766;
unsigned char var_3 = (unsigned char)27;
short var_7 = (short)-19254;
unsigned char var_12 = (unsigned char)149;
int zero = 0;
unsigned char var_16 = (unsigned char)217;
short var_17 = (short)8029;
void init() {
}

void checksum() {
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
