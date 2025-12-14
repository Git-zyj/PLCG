#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -9088178503696579049LL;
unsigned int var_2 = 2545104293U;
unsigned int var_3 = 1088135627U;
short var_5 = (short)-9669;
short var_10 = (short)-10469;
_Bool var_12 = (_Bool)1;
int zero = 0;
signed char var_15 = (signed char)-81;
unsigned char var_16 = (unsigned char)147;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
