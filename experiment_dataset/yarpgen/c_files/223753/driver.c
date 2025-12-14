#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)235;
short var_6 = (short)-29652;
long long int var_10 = 9109895756184708819LL;
unsigned char var_11 = (unsigned char)23;
unsigned short var_14 = (unsigned short)1710;
signed char var_16 = (signed char)-38;
signed char var_18 = (signed char)-104;
int zero = 0;
short var_20 = (short)-16863;
long long int var_21 = -100519893196785507LL;
unsigned long long int var_22 = 1469615210308812388ULL;
long long int var_23 = 1530927115087368863LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
