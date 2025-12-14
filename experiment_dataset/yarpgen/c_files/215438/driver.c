#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 742449580U;
short var_3 = (short)27808;
unsigned short var_4 = (unsigned short)18896;
long long int var_6 = -2573940552132368508LL;
unsigned short var_7 = (unsigned short)19735;
long long int var_8 = 2588710152098666530LL;
signed char var_9 = (signed char)38;
int zero = 0;
unsigned int var_10 = 4219531907U;
unsigned short var_11 = (unsigned short)8809;
long long int var_12 = -4835296056104829453LL;
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
