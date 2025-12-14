#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)104;
unsigned int var_5 = 1369542752U;
int var_8 = -500657424;
unsigned char var_10 = (unsigned char)238;
unsigned char var_11 = (unsigned char)69;
int zero = 0;
unsigned short var_17 = (unsigned short)14899;
unsigned int var_18 = 400751481U;
void init() {
}

void checksum() {
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
