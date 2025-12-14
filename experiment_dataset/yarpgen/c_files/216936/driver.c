#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1348883379U;
unsigned int var_4 = 3564582717U;
unsigned int var_5 = 777068992U;
unsigned int var_6 = 1249031372U;
unsigned int var_7 = 1729369358U;
unsigned int var_8 = 240636264U;
int zero = 0;
unsigned int var_10 = 856694858U;
unsigned int var_11 = 2174519207U;
unsigned int var_12 = 1002446012U;
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
