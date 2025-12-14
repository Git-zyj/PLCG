#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)0;
int var_7 = -1850915546;
short var_12 = (short)-17455;
unsigned long long int var_17 = 12053514086289561099ULL;
int zero = 0;
unsigned int var_18 = 3317795280U;
unsigned int var_19 = 1959407550U;
unsigned short var_20 = (unsigned short)58632;
unsigned long long int var_21 = 2207633072795673318ULL;
unsigned int var_22 = 795698377U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
