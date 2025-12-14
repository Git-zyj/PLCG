#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)56;
unsigned char var_4 = (unsigned char)17;
short var_8 = (short)-22415;
unsigned int var_12 = 134119998U;
unsigned int var_14 = 1619593489U;
short var_17 = (short)-16564;
int zero = 0;
unsigned int var_18 = 2343067260U;
short var_19 = (short)-776;
short var_20 = (short)-18515;
int var_21 = -1431735944;
int var_22 = 1670446866;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
