#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1972856656;
long long int var_2 = -1374649359688702271LL;
unsigned char var_8 = (unsigned char)204;
_Bool var_11 = (_Bool)0;
_Bool var_14 = (_Bool)1;
int zero = 0;
signed char var_19 = (signed char)-124;
short var_20 = (short)-22656;
short var_21 = (short)-20085;
unsigned int var_22 = 3147227346U;
unsigned int var_23 = 2845215887U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
