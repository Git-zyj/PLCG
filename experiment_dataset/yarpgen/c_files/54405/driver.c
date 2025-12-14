#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)22;
signed char var_5 = (signed char)-104;
short var_8 = (short)-20343;
unsigned char var_11 = (unsigned char)136;
int zero = 0;
int var_15 = 103429567;
int var_16 = -1148635378;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
