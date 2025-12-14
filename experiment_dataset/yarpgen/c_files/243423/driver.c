#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4003939129U;
long long int var_3 = -6794954043432495963LL;
unsigned int var_6 = 1983458464U;
unsigned int var_7 = 2669702272U;
unsigned int var_10 = 1478544717U;
short var_11 = (short)22470;
short var_13 = (short)24296;
unsigned int var_14 = 1350504758U;
int zero = 0;
unsigned int var_16 = 505518637U;
unsigned int var_17 = 1407203474U;
long long int var_18 = -7331152111324767396LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
