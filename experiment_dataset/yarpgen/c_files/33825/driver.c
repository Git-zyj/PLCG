#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59327;
unsigned int var_3 = 3559136167U;
unsigned short var_4 = (unsigned short)56800;
unsigned short var_5 = (unsigned short)27559;
int var_6 = -910367673;
unsigned char var_9 = (unsigned char)24;
int zero = 0;
signed char var_10 = (signed char)-114;
unsigned long long int var_11 = 614972664563168084ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
