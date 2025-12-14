#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1673242232715660014LL;
long long int var_5 = 927151560370276770LL;
unsigned char var_7 = (unsigned char)220;
long long int var_12 = -4041696788259803603LL;
_Bool var_13 = (_Bool)1;
short var_16 = (short)-13647;
unsigned int var_17 = 2991838134U;
int zero = 0;
short var_20 = (short)-14686;
int var_21 = -699566994;
short var_22 = (short)-4344;
int var_23 = -1332381641;
signed char var_24 = (signed char)-43;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
