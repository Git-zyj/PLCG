#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5534623612784399116ULL;
unsigned char var_6 = (unsigned char)237;
unsigned int var_9 = 2772604052U;
int zero = 0;
_Bool var_13 = (_Bool)1;
short var_14 = (short)21979;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
