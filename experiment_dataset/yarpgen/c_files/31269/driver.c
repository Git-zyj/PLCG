#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63803;
unsigned short var_1 = (unsigned short)41674;
signed char var_2 = (signed char)29;
unsigned int var_4 = 2190241808U;
unsigned short var_5 = (unsigned short)53913;
unsigned short var_10 = (unsigned short)37236;
short var_11 = (short)18899;
short var_15 = (short)-24692;
signed char var_16 = (signed char)22;
int zero = 0;
unsigned short var_17 = (unsigned short)60777;
long long int var_18 = 4455441476217388539LL;
void init() {
}

void checksum() {
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
