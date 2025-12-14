#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1448454548272580107LL;
_Bool var_2 = (_Bool)1;
unsigned long long int var_4 = 1171887804741711314ULL;
unsigned char var_6 = (unsigned char)88;
long long int var_8 = 2919911551000984772LL;
int zero = 0;
signed char var_15 = (signed char)69;
signed char var_16 = (signed char)(-127 - 1);
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
