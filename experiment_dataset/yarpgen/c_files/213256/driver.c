#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)19;
int var_4 = -1438795789;
unsigned int var_5 = 149762138U;
unsigned short var_7 = (unsigned short)19167;
unsigned char var_13 = (unsigned char)109;
int zero = 0;
unsigned char var_16 = (unsigned char)90;
int var_17 = 187071522;
void init() {
}

void checksum() {
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
