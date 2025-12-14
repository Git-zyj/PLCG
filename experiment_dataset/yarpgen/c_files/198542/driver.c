#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-20210;
_Bool var_1 = (_Bool)0;
short var_6 = (short)-23920;
long long int var_9 = -4319547048932729938LL;
int zero = 0;
unsigned int var_13 = 3777108680U;
unsigned long long int var_14 = 12958554099475950955ULL;
int var_15 = 876490546;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
