#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 214889239U;
int var_6 = 497367158;
unsigned short var_13 = (unsigned short)17025;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 944499127U;
unsigned long long int var_18 = 444116846732360048ULL;
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
