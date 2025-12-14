#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
long long int var_5 = 5134738738783659308LL;
long long int var_7 = -7485555830600060070LL;
long long int var_9 = 6327726338584116552LL;
_Bool var_13 = (_Bool)0;
int zero = 0;
long long int var_14 = -4929976263062835746LL;
_Bool var_15 = (_Bool)0;
long long int var_16 = -2945042717744282450LL;
long long int var_17 = 7069623254519104584LL;
void init() {
}

void checksum() {
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
