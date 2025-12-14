#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 2967039534295779377ULL;
long long int var_7 = 1199656791324544199LL;
unsigned long long int var_8 = 18057436919743661507ULL;
signed char var_14 = (signed char)(-127 - 1);
unsigned short var_16 = (unsigned short)57558;
int zero = 0;
signed char var_19 = (signed char)85;
short var_20 = (short)-23767;
long long int var_21 = 8119712080055129350LL;
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
