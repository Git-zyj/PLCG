#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-3491;
signed char var_4 = (signed char)33;
long long int var_7 = 8559290038059783307LL;
signed char var_8 = (signed char)-84;
signed char var_10 = (signed char)-30;
int zero = 0;
int var_12 = -1122864497;
signed char var_13 = (signed char)33;
long long int var_14 = -7523944853656302109LL;
signed char var_15 = (signed char)39;
signed char var_16 = (signed char)60;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
