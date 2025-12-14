#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)35;
short var_1 = (short)23076;
signed char var_2 = (signed char)-84;
unsigned long long int var_5 = 15182218537049957015ULL;
signed char var_6 = (signed char)71;
unsigned int var_7 = 2410947079U;
int var_9 = -610123610;
int zero = 0;
unsigned int var_10 = 139694877U;
short var_11 = (short)8037;
unsigned short var_12 = (unsigned short)57126;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
