#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_5 = (unsigned short)52485;
short var_9 = (short)-19629;
long long int var_11 = 8308370816429442401LL;
int zero = 0;
unsigned long long int var_16 = 1638718623848387299ULL;
long long int var_17 = 4482463821881520698LL;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)39532;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
