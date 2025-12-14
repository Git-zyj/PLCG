#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2747932271U;
int var_10 = 249499603;
signed char var_13 = (signed char)126;
unsigned short var_14 = (unsigned short)63867;
unsigned long long int var_15 = 2928862341542479427ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)44274;
long long int var_19 = 4896355546195684541LL;
unsigned int var_20 = 1854809171U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
