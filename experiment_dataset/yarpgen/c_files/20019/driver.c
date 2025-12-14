#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)77;
short var_4 = (short)-5062;
int var_5 = -42995123;
unsigned short var_10 = (unsigned short)7423;
int zero = 0;
unsigned long long int var_11 = 5659682294198033341ULL;
signed char var_12 = (signed char)-49;
unsigned char var_13 = (unsigned char)96;
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
