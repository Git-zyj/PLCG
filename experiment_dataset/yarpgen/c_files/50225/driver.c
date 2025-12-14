#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1363479465U;
unsigned short var_3 = (unsigned short)22503;
unsigned int var_4 = 1178836415U;
signed char var_5 = (signed char)-29;
int var_6 = -810188429;
unsigned char var_7 = (unsigned char)245;
int zero = 0;
short var_12 = (short)24565;
short var_13 = (short)-1831;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
