#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)186;
signed char var_2 = (signed char)-96;
short var_6 = (short)28050;
short var_8 = (short)-5028;
short var_10 = (short)-23110;
unsigned char var_12 = (unsigned char)43;
int zero = 0;
unsigned char var_16 = (unsigned char)102;
unsigned long long int var_17 = 12951558295497348060ULL;
long long int var_18 = -7665808980065675643LL;
short var_19 = (short)19771;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
