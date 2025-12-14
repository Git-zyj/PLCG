#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 208420734U;
unsigned short var_7 = (unsigned short)50508;
unsigned int var_12 = 3726540736U;
signed char var_13 = (signed char)-113;
long long int var_16 = 7611428290151631050LL;
int zero = 0;
_Bool var_17 = (_Bool)0;
short var_18 = (short)-23544;
unsigned char var_19 = (unsigned char)86;
void init() {
}

void checksum() {
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
