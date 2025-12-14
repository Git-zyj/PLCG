#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_2 = (unsigned char)195;
unsigned int var_4 = 2651791123U;
unsigned short var_10 = (unsigned short)51414;
unsigned long long int var_13 = 11364697993366253346ULL;
signed char var_14 = (signed char)82;
int zero = 0;
signed char var_15 = (signed char)69;
signed char var_16 = (signed char)40;
void init() {
}

void checksum() {
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
