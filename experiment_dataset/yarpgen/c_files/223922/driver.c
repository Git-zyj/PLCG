#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)43109;
long long int var_6 = -4534565314219184067LL;
unsigned char var_7 = (unsigned char)40;
short var_9 = (short)-6272;
long long int var_11 = -5590654594401147656LL;
_Bool var_12 = (_Bool)1;
int zero = 0;
int var_14 = -398509827;
unsigned int var_15 = 4233845602U;
signed char var_16 = (signed char)79;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
