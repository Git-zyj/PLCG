#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 867704136U;
unsigned int var_6 = 3741268055U;
unsigned int var_8 = 3184990046U;
unsigned long long int var_14 = 17048116673170621174ULL;
int zero = 0;
int var_16 = 1842996309;
short var_17 = (short)-7871;
unsigned int var_18 = 4166640738U;
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
