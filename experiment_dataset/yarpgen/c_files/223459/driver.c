#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_7 = (_Bool)1;
unsigned short var_10 = (unsigned short)52214;
unsigned int var_14 = 1249511723U;
long long int var_16 = -978207346199859145LL;
int zero = 0;
unsigned long long int var_17 = 17237238823753605847ULL;
unsigned long long int var_18 = 14415370972933550369ULL;
unsigned short var_19 = (unsigned short)45127;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
