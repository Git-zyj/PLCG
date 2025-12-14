#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)-21543;
signed char var_2 = (signed char)-61;
long long int var_9 = 3257618843585152827LL;
unsigned short var_13 = (unsigned short)63954;
int zero = 0;
signed char var_15 = (signed char)-108;
unsigned int var_16 = 866746792U;
void init() {
}

void checksum() {
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
