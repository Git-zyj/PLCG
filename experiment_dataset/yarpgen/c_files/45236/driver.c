#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-11964;
_Bool var_8 = (_Bool)0;
int var_9 = -1709448433;
unsigned short var_10 = (unsigned short)9120;
long long int var_11 = -8293074129457348204LL;
int zero = 0;
short var_12 = (short)-25705;
unsigned long long int var_13 = 15355128301293260020ULL;
short var_14 = (short)30359;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
