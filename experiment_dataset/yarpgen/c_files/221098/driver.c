#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-23524;
_Bool var_8 = (_Bool)0;
unsigned long long int var_13 = 10690872595305030901ULL;
unsigned char var_14 = (unsigned char)100;
unsigned int var_16 = 2507332711U;
int zero = 0;
unsigned long long int var_18 = 465275912486219166ULL;
short var_19 = (short)17539;
unsigned char var_20 = (unsigned char)210;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
