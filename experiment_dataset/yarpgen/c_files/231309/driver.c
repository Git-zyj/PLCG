#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_4 = 14848018471830668262ULL;
long long int var_6 = 68018135200157011LL;
_Bool var_7 = (_Bool)0;
int var_12 = 402860006;
unsigned short var_13 = (unsigned short)22833;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 17433424144424513543ULL;
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
