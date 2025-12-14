#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2815844379U;
unsigned char var_1 = (unsigned char)205;
signed char var_2 = (signed char)43;
signed char var_5 = (signed char)-126;
unsigned int var_7 = 1376941576U;
unsigned short var_9 = (unsigned short)64315;
int zero = 0;
unsigned long long int var_11 = 9028255485640880291ULL;
short var_12 = (short)5672;
unsigned char var_13 = (unsigned char)18;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
