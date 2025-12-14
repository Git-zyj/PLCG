#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16910968242642615165ULL;
short var_2 = (short)-21963;
int var_3 = -266025544;
unsigned char var_11 = (unsigned char)49;
unsigned int var_12 = 2593458305U;
int zero = 0;
int var_14 = -1635800171;
unsigned short var_15 = (unsigned short)52227;
signed char var_16 = (signed char)23;
int var_17 = -2080479808;
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
