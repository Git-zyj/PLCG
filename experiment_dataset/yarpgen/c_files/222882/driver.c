#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)1853;
short var_9 = (short)2416;
signed char var_12 = (signed char)-106;
int zero = 0;
int var_14 = -417713320;
unsigned int var_15 = 2298429896U;
unsigned short var_16 = (unsigned short)21557;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
