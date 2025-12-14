#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4391;
unsigned int var_5 = 2562118078U;
int var_7 = -12210306;
long long int var_8 = 7912403379050387232LL;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 758410146985291394ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
