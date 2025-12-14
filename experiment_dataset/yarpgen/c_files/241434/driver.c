#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-95;
unsigned char var_4 = (unsigned char)144;
unsigned short var_13 = (unsigned short)45791;
unsigned char var_16 = (unsigned char)231;
int zero = 0;
short var_17 = (short)12570;
unsigned long long int var_18 = 6507033002815315530ULL;
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
