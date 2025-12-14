#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2631465324662915520LL;
unsigned char var_2 = (unsigned char)130;
_Bool var_4 = (_Bool)1;
short var_6 = (short)28379;
short var_8 = (short)-5225;
long long int var_11 = -8055532080409650612LL;
long long int var_12 = -5069717771404201728LL;
signed char var_13 = (signed char)-34;
int zero = 0;
unsigned long long int var_18 = 8932957106761233120ULL;
unsigned int var_19 = 568110962U;
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
