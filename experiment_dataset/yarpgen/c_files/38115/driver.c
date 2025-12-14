#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)168;
unsigned char var_1 = (unsigned char)238;
unsigned int var_2 = 2641022951U;
unsigned int var_3 = 258976135U;
unsigned short var_7 = (unsigned short)17785;
unsigned char var_8 = (unsigned char)31;
unsigned int var_12 = 1340463078U;
int zero = 0;
unsigned char var_13 = (unsigned char)129;
unsigned int var_14 = 3774182687U;
void init() {
}

void checksum() {
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
