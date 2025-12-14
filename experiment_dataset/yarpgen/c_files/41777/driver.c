#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2266758588620912189LL;
int var_1 = 1286689682;
int var_3 = 1033860601;
signed char var_5 = (signed char)55;
long long int var_6 = -4696391338810359369LL;
unsigned short var_7 = (unsigned short)55658;
int zero = 0;
signed char var_10 = (signed char)-24;
unsigned char var_11 = (unsigned char)254;
short var_12 = (short)-9768;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
