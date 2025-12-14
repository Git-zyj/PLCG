#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)252;
unsigned long long int var_3 = 4168351410600981916ULL;
unsigned long long int var_5 = 11473686220355274529ULL;
short var_9 = (short)16694;
long long int var_10 = 7159079145964350730LL;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 167148279U;
unsigned char var_15 = (unsigned char)24;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
