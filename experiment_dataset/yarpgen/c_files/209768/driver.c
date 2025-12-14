#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-99;
unsigned short var_7 = (unsigned short)40108;
short var_8 = (short)-9318;
signed char var_9 = (signed char)22;
int zero = 0;
unsigned short var_11 = (unsigned short)58673;
short var_12 = (short)-15884;
short var_13 = (short)30526;
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
