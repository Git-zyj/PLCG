#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)44;
unsigned char var_5 = (unsigned char)1;
signed char var_7 = (signed char)-92;
short var_12 = (short)13214;
unsigned char var_15 = (unsigned char)93;
int zero = 0;
unsigned long long int var_20 = 1984999850492823013ULL;
short var_21 = (short)-21432;
long long int var_22 = -2314323428218145811LL;
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
