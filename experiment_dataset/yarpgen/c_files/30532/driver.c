#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)43;
unsigned short var_3 = (unsigned short)3542;
_Bool var_4 = (_Bool)1;
_Bool var_6 = (_Bool)0;
unsigned long long int var_12 = 17800678327524685309ULL;
_Bool var_13 = (_Bool)1;
int zero = 0;
long long int var_16 = -6645341178399748734LL;
short var_17 = (short)14106;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
