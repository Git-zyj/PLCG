#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)1;
signed char var_7 = (signed char)37;
unsigned short var_8 = (unsigned short)4562;
signed char var_15 = (signed char)79;
short var_16 = (short)-4250;
unsigned char var_17 = (unsigned char)255;
unsigned long long int var_18 = 1467558326697795990ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)57583;
short var_20 = (short)-17934;
long long int var_21 = 6755813524644340955LL;
_Bool var_22 = (_Bool)0;
unsigned long long int var_23 = 10040776211125681021ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
