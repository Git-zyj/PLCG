#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)86;
unsigned int var_5 = 842579776U;
unsigned short var_6 = (unsigned short)25002;
signed char var_7 = (signed char)78;
int var_10 = -741365379;
int zero = 0;
signed char var_11 = (signed char)5;
int var_12 = 1772948019;
int var_13 = 131271991;
int var_14 = 1098232297;
unsigned long long int var_15 = 10343542208621044258ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
