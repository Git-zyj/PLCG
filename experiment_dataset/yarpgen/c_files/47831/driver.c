#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)33162;
unsigned short var_3 = (unsigned short)18711;
unsigned char var_12 = (unsigned char)182;
unsigned short var_13 = (unsigned short)24607;
int zero = 0;
int var_14 = -265238635;
unsigned int var_15 = 4114716286U;
unsigned short var_16 = (unsigned short)34125;
int var_17 = 1001138394;
void init() {
}

void checksum() {
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
