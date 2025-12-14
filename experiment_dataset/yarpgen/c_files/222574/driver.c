#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-45;
long long int var_1 = -678294827405936617LL;
unsigned long long int var_8 = 1728671220325952619ULL;
short var_11 = (short)-23120;
unsigned long long int var_14 = 14212710818536982267ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)30135;
short var_17 = (short)21699;
unsigned short var_18 = (unsigned short)9032;
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
