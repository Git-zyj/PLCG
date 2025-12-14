#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)22991;
signed char var_2 = (signed char)79;
_Bool var_3 = (_Bool)0;
short var_4 = (short)-16663;
unsigned short var_7 = (unsigned short)36378;
unsigned long long int var_9 = 10996995917063301925ULL;
unsigned int var_12 = 1710804779U;
int zero = 0;
short var_13 = (short)-16125;
unsigned char var_14 = (unsigned char)20;
signed char var_15 = (signed char)-91;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
