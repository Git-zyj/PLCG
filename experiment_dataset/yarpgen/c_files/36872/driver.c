#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-16986;
long long int var_1 = -3245861586259196054LL;
long long int var_2 = -2815689251149438553LL;
short var_4 = (short)6796;
unsigned int var_7 = 4016881746U;
_Bool var_8 = (_Bool)0;
int zero = 0;
long long int var_14 = 560304163319593457LL;
unsigned int var_15 = 57017629U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
