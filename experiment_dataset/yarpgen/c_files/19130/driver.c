#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3942488843U;
int var_8 = -247036178;
int var_9 = 765263780;
short var_11 = (short)-18289;
int var_12 = 1568915429;
int zero = 0;
unsigned int var_13 = 2670888119U;
signed char var_14 = (signed char)-92;
_Bool var_15 = (_Bool)1;
int var_16 = 1557907873;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
