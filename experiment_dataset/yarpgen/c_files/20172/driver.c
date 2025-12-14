#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)20660;
long long int var_16 = -4112573373311031966LL;
int zero = 0;
_Bool var_20 = (_Bool)1;
long long int var_21 = -5361092837530855046LL;
void init() {
}

void checksum() {
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
