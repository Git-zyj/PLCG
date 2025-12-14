#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45203;
unsigned long long int var_10 = 5999887725277611136ULL;
unsigned char var_16 = (unsigned char)222;
signed char var_18 = (signed char)(-127 - 1);
signed char var_19 = (signed char)116;
int zero = 0;
signed char var_20 = (signed char)-100;
short var_21 = (short)8547;
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
