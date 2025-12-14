#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4176;
unsigned short var_5 = (unsigned short)28599;
unsigned long long int var_7 = 7132722526699250176ULL;
_Bool var_8 = (_Bool)0;
int var_11 = 322642011;
long long int var_12 = -5276078078504334362LL;
int zero = 0;
short var_15 = (short)18736;
unsigned short var_16 = (unsigned short)9926;
unsigned int var_17 = 1424296215U;
void init() {
}

void checksum() {
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
