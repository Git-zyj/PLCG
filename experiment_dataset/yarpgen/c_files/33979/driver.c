#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -179008218;
int var_7 = -1646186466;
long long int var_8 = 9132492549714534434LL;
signed char var_11 = (signed char)-6;
long long int var_12 = 8319466246820385175LL;
int zero = 0;
int var_15 = -893359570;
int var_16 = -1074043836;
unsigned int var_17 = 3127625485U;
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
