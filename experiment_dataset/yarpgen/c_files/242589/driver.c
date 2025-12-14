#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)41940;
unsigned int var_4 = 3707977473U;
short var_6 = (short)-15560;
unsigned short var_8 = (unsigned short)44852;
unsigned int var_10 = 649282856U;
unsigned int var_11 = 322805958U;
int zero = 0;
unsigned int var_12 = 1326015792U;
signed char var_13 = (signed char)-108;
signed char var_14 = (signed char)95;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
