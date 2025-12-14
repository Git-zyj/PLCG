#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)40176;
long long int var_6 = 9029529019762590963LL;
long long int var_13 = 1953051139725083568LL;
unsigned short var_17 = (unsigned short)46181;
int zero = 0;
short var_20 = (short)-869;
int var_21 = -324394376;
signed char var_22 = (signed char)(-127 - 1);
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
