#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 368133769U;
unsigned short var_7 = (unsigned short)27327;
int var_8 = 1143657434;
unsigned long long int var_9 = 18406240546132822192ULL;
unsigned short var_12 = (unsigned short)64128;
unsigned short var_13 = (unsigned short)16599;
signed char var_14 = (signed char)72;
unsigned int var_15 = 1318338101U;
int zero = 0;
unsigned int var_18 = 918181386U;
signed char var_19 = (signed char)41;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
