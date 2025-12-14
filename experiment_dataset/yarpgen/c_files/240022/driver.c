#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)21190;
unsigned int var_4 = 2065692362U;
unsigned char var_17 = (unsigned char)159;
int zero = 0;
unsigned short var_20 = (unsigned short)62470;
unsigned long long int var_21 = 8800405424700222375ULL;
short var_22 = (short)3290;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
