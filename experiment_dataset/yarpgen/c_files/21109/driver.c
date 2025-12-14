#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4212708464192743035ULL;
short var_3 = (short)15216;
unsigned short var_6 = (unsigned short)61171;
signed char var_7 = (signed char)-21;
unsigned int var_9 = 572610490U;
unsigned char var_14 = (unsigned char)233;
int zero = 0;
unsigned long long int var_20 = 16530690859525840023ULL;
unsigned char var_21 = (unsigned char)65;
signed char var_22 = (signed char)110;
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
