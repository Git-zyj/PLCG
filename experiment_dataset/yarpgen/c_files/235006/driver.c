#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 10538133950189098025ULL;
unsigned short var_6 = (unsigned short)23043;
int var_11 = -1065028820;
unsigned char var_14 = (unsigned char)147;
int zero = 0;
unsigned char var_15 = (unsigned char)37;
unsigned int var_16 = 2525675617U;
unsigned short var_17 = (unsigned short)19497;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
