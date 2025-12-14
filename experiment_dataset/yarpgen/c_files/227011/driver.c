#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 17427494179350834430ULL;
long long int var_7 = 3348538820194013205LL;
int var_12 = 1272558926;
int zero = 0;
short var_13 = (short)-25034;
int var_14 = -1728683455;
int var_15 = 1899755115;
short var_16 = (short)5705;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
