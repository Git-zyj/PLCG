#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3040469441U;
unsigned short var_9 = (unsigned short)11109;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 9806736494186720472ULL;
int var_13 = 1786283687;
int zero = 0;
short var_18 = (short)-25389;
unsigned long long int var_19 = 12449710357934416995ULL;
_Bool var_20 = (_Bool)0;
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
