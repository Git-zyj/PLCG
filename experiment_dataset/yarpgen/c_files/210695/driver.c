#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)159;
unsigned int var_5 = 1849230536U;
short var_9 = (short)8086;
int zero = 0;
unsigned short var_16 = (unsigned short)23706;
int var_17 = 1635030475;
unsigned char var_18 = (unsigned char)207;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
