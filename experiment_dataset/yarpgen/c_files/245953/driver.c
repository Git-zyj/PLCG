#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_10 = 1129828337U;
_Bool var_12 = (_Bool)0;
unsigned short var_16 = (unsigned short)36328;
int zero = 0;
int var_20 = 1590503885;
unsigned long long int var_21 = 15738919345744600123ULL;
short var_22 = (short)4656;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
