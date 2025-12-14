#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3391208713U;
unsigned short var_7 = (unsigned short)27701;
unsigned int var_8 = 1339948076U;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 2983743470U;
unsigned long long int var_12 = 6907367316489934637ULL;
unsigned int var_13 = 638013462U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
