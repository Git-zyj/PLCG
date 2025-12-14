#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3581290505603244992ULL;
short var_1 = (short)-25139;
signed char var_6 = (signed char)-87;
unsigned long long int var_7 = 972673226623286047ULL;
long long int var_10 = -7606252172625545409LL;
short var_12 = (short)-30518;
int zero = 0;
short var_17 = (short)22742;
short var_18 = (short)-31489;
unsigned int var_19 = 1201892223U;
short var_20 = (short)-14606;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
