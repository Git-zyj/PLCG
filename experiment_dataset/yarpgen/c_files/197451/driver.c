#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-51;
signed char var_12 = (signed char)-99;
unsigned short var_13 = (unsigned short)34928;
int zero = 0;
long long int var_16 = -1691523716663292835LL;
unsigned int var_17 = 1687649979U;
void init() {
}

void checksum() {
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
