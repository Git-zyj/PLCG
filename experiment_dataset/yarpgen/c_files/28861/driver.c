#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-14426;
unsigned short var_4 = (unsigned short)33748;
_Bool var_9 = (_Bool)0;
int var_12 = -365688636;
unsigned int var_15 = 2464640863U;
int zero = 0;
unsigned long long int var_17 = 10556782741005044776ULL;
long long int var_18 = 3739029828214276419LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
