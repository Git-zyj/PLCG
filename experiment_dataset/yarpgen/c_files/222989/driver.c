#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-30739;
unsigned long long int var_5 = 6805059681229007295ULL;
unsigned short var_6 = (unsigned short)59982;
unsigned char var_7 = (unsigned char)198;
unsigned char var_8 = (unsigned char)196;
int var_9 = -837405209;
short var_11 = (short)-29006;
long long int var_12 = -1165879648575726049LL;
signed char var_16 = (signed char)67;
int zero = 0;
unsigned char var_20 = (unsigned char)56;
unsigned int var_21 = 1428585291U;
short var_22 = (short)24912;
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
