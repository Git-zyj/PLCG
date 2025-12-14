#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)20;
unsigned int var_3 = 3884751818U;
long long int var_7 = 292101290311046263LL;
short var_11 = (short)-13948;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)159;
long long int var_15 = -7768015421186664572LL;
long long int var_16 = 2977842144599749610LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
