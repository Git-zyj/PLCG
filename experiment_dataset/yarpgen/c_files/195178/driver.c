#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_14 = (signed char)73;
long long int var_16 = -5317473800994743179LL;
short var_17 = (short)-5098;
int var_19 = 1614686774;
int zero = 0;
unsigned long long int var_20 = 14763660349813372314ULL;
int var_21 = -1141628633;
unsigned int var_22 = 2552359292U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
