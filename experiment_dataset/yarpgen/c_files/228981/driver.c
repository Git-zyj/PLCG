#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1875188900;
unsigned long long int var_2 = 10419151278360378375ULL;
short var_3 = (short)27524;
short var_5 = (short)-2050;
int zero = 0;
short var_11 = (short)-17359;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
