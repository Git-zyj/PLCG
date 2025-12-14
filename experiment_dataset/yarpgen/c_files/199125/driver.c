#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)22374;
unsigned short var_2 = (unsigned short)27215;
unsigned short var_13 = (unsigned short)45948;
signed char var_16 = (signed char)-5;
signed char var_17 = (signed char)-21;
int zero = 0;
int var_20 = 1443243376;
signed char var_21 = (signed char)-108;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
