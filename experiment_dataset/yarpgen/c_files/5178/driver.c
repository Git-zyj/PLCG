#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)30;
int var_6 = 353707307;
_Bool var_10 = (_Bool)0;
short var_13 = (short)-26250;
unsigned int var_15 = 2007963265U;
int zero = 0;
int var_17 = 2055193588;
unsigned short var_18 = (unsigned short)39149;
unsigned long long int var_19 = 2587895333103001536ULL;
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
