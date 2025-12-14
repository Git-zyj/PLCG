#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25027;
signed char var_1 = (signed char)86;
long long int var_3 = 9209572915570189429LL;
short var_6 = (short)9477;
int var_9 = -1217021002;
int zero = 0;
_Bool var_16 = (_Bool)0;
long long int var_17 = -7808243212523024699LL;
void init() {
}

void checksum() {
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
