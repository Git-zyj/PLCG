#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)60;
unsigned int var_7 = 1343803488U;
long long int var_9 = 4100796784990013139LL;
short var_10 = (short)-2864;
long long int var_12 = -8807704483921026186LL;
int zero = 0;
short var_13 = (short)-20268;
short var_14 = (short)12654;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
