#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-20;
unsigned int var_1 = 3644770895U;
unsigned short var_9 = (unsigned short)271;
_Bool var_10 = (_Bool)1;
int zero = 0;
long long int var_11 = -527101673025498908LL;
unsigned char var_12 = (unsigned char)144;
short var_13 = (short)-16108;
unsigned long long int var_14 = 3388364178520441068ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
