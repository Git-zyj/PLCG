#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-21096;
short var_6 = (short)18519;
short var_8 = (short)26456;
unsigned long long int var_9 = 10975103251388239867ULL;
unsigned int var_10 = 4220527673U;
signed char var_12 = (signed char)-8;
unsigned long long int var_15 = 6261909633291461747ULL;
int zero = 0;
short var_16 = (short)8118;
int var_17 = 1383470469;
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
