#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)83;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)34;
unsigned char var_11 = (unsigned char)45;
unsigned int var_13 = 1446849279U;
int zero = 0;
short var_15 = (short)9745;
_Bool var_16 = (_Bool)1;
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
