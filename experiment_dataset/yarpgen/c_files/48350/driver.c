#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)223;
unsigned char var_2 = (unsigned char)22;
unsigned int var_3 = 1653893027U;
unsigned long long int var_4 = 12870465527535284948ULL;
unsigned int var_7 = 2746786446U;
long long int var_8 = -1619592972729535803LL;
long long int var_9 = -6756163886166475572LL;
signed char var_11 = (signed char)-59;
unsigned int var_12 = 2680493863U;
signed char var_13 = (signed char)43;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)7;
signed char var_16 = (signed char)-66;
void init() {
}

void checksum() {
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
