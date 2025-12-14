#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 694494964U;
unsigned int var_4 = 2198135282U;
unsigned int var_5 = 1566007099U;
unsigned int var_7 = 1276977368U;
unsigned int var_8 = 1622954119U;
unsigned int var_11 = 310506921U;
short var_12 = (short)-31922;
unsigned int var_13 = 1925951494U;
int zero = 0;
unsigned int var_16 = 2224348884U;
signed char var_17 = (signed char)34;
unsigned int var_18 = 1122473841U;
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
