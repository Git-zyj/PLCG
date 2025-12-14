#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)1054;
_Bool var_2 = (_Bool)0;
long long int var_12 = 8550499456061415430LL;
long long int var_14 = 5368006366756859844LL;
int zero = 0;
int var_17 = -813097210;
short var_18 = (short)-16160;
unsigned char var_19 = (unsigned char)139;
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
