#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1580240932U;
unsigned int var_7 = 960511848U;
int var_9 = 1669189042;
unsigned int var_10 = 4127862550U;
int var_14 = -2034921634;
signed char var_16 = (signed char)116;
int var_17 = 402788926;
int zero = 0;
unsigned long long int var_20 = 13552034685517727459ULL;
unsigned int var_21 = 311308056U;
int var_22 = -74299405;
int var_23 = 556378552;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
