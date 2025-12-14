#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-7644;
signed char var_6 = (signed char)50;
int var_7 = 1390409650;
signed char var_8 = (signed char)-96;
unsigned char var_15 = (unsigned char)53;
int zero = 0;
unsigned char var_16 = (unsigned char)184;
signed char var_17 = (signed char)-89;
long long int var_18 = -8930650362013024246LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
