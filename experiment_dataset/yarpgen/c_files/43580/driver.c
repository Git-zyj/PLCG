#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)-96;
unsigned int var_12 = 3730727692U;
unsigned char var_14 = (unsigned char)31;
int zero = 0;
unsigned int var_19 = 451497800U;
unsigned short var_20 = (unsigned short)44676;
unsigned int var_21 = 711549U;
int var_22 = -2071852141;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
