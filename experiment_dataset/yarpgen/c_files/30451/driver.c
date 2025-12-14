#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
long long int var_4 = -1275770406887221885LL;
unsigned char var_10 = (unsigned char)45;
_Bool var_16 = (_Bool)1;
long long int var_18 = 8145274866203317630LL;
int zero = 0;
unsigned short var_19 = (unsigned short)57099;
signed char var_20 = (signed char)48;
unsigned int var_21 = 1248501132U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
