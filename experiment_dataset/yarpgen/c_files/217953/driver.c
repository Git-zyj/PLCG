#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4044592214U;
unsigned short var_3 = (unsigned short)52443;
unsigned int var_4 = 3566495261U;
unsigned short var_9 = (unsigned short)46955;
short var_11 = (short)-22119;
int zero = 0;
unsigned int var_16 = 348228850U;
unsigned int var_17 = 3557491469U;
signed char var_18 = (signed char)-125;
unsigned char var_19 = (unsigned char)123;
unsigned char var_20 = (unsigned char)246;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
