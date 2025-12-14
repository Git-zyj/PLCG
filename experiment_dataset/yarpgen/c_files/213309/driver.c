#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)80;
unsigned long long int var_4 = 8564371223114379464ULL;
unsigned int var_6 = 381382344U;
signed char var_8 = (signed char)82;
int zero = 0;
short var_10 = (short)-10549;
short var_11 = (short)18094;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
