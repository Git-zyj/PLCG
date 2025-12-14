#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 600926548126046083ULL;
short var_7 = (short)-16544;
long long int var_13 = -8468141771921103582LL;
unsigned char var_14 = (unsigned char)155;
unsigned int var_17 = 3760644451U;
int zero = 0;
unsigned long long int var_18 = 11435799077505554904ULL;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
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
