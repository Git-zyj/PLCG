#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-18;
unsigned long long int var_5 = 14263278062540613463ULL;
short var_10 = (short)13503;
int zero = 0;
_Bool var_14 = (_Bool)1;
int var_15 = 231243970;
short var_16 = (short)-30536;
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
