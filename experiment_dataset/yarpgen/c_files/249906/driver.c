#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-4;
short var_1 = (short)-23224;
long long int var_4 = -2370688943083617446LL;
unsigned long long int var_8 = 9853639448441447857ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)45;
signed char var_15 = (signed char)-120;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 1260701119U;
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
