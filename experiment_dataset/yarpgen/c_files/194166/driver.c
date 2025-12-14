#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)16493;
unsigned int var_4 = 628041714U;
unsigned short var_7 = (unsigned short)48931;
unsigned int var_8 = 3353692796U;
unsigned int var_12 = 3750979252U;
int var_16 = -1565467724;
unsigned char var_18 = (unsigned char)64;
int zero = 0;
int var_20 = -1249879181;
unsigned long long int var_21 = 9395317665452682227ULL;
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
