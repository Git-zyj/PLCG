#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -1046511748568619413LL;
short var_10 = (short)-32387;
long long int var_15 = 1059813236788262909LL;
int zero = 0;
long long int var_17 = 3748740008940395959LL;
unsigned short var_18 = (unsigned short)56600;
signed char var_19 = (signed char)70;
signed char var_20 = (signed char)-40;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
