#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1966264000;
unsigned long long int var_1 = 962409050676665286ULL;
unsigned int var_4 = 2853242218U;
short var_7 = (short)11946;
unsigned int var_8 = 1547741166U;
unsigned int var_9 = 1194434394U;
int zero = 0;
unsigned int var_11 = 2082584104U;
unsigned long long int var_12 = 17352549109092453544ULL;
void init() {
}

void checksum() {
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
