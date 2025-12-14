#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
long long int var_5 = 6809595452641107916LL;
long long int var_8 = 4434443302224760886LL;
unsigned int var_13 = 3645277541U;
int zero = 0;
long long int var_16 = 7813978452893695724LL;
unsigned char var_17 = (unsigned char)52;
unsigned char var_18 = (unsigned char)250;
void init() {
}

void checksum() {
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
