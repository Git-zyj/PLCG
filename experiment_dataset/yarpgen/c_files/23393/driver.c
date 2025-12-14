#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -777556011;
short var_2 = (short)-9150;
signed char var_3 = (signed char)-85;
unsigned int var_5 = 4081650371U;
unsigned int var_6 = 1174224407U;
unsigned long long int var_12 = 3234650269741304733ULL;
short var_13 = (short)22404;
unsigned int var_14 = 711460403U;
int zero = 0;
unsigned int var_15 = 2516520834U;
unsigned int var_16 = 2016103793U;
int var_17 = 363163961;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
