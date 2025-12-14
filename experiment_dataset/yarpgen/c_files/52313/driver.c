#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-20830;
int var_3 = -127961304;
unsigned int var_8 = 957865753U;
unsigned int var_11 = 2912260148U;
unsigned long long int var_13 = 8054542420647715505ULL;
int zero = 0;
unsigned long long int var_19 = 2035692115312836434ULL;
long long int var_20 = -6409033001213561692LL;
void init() {
}

void checksum() {
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
