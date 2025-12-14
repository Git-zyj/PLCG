#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18016;
int var_7 = 216409796;
unsigned long long int var_9 = 3761733490197454283ULL;
long long int var_10 = -7869210448772899606LL;
long long int var_11 = -3048751730855322060LL;
short var_13 = (short)17080;
int zero = 0;
unsigned long long int var_15 = 16830163092117133177ULL;
signed char var_16 = (signed char)77;
unsigned int var_17 = 377129773U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
