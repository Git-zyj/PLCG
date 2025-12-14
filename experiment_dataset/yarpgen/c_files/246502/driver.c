#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 3610271142U;
signed char var_10 = (signed char)-115;
unsigned int var_12 = 1324047738U;
int zero = 0;
long long int var_14 = -1865931867634841262LL;
_Bool var_15 = (_Bool)0;
short var_16 = (short)-26579;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
