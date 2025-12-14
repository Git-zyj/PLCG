#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3818645403637922378LL;
_Bool var_6 = (_Bool)1;
signed char var_9 = (signed char)96;
int zero = 0;
unsigned int var_11 = 2684562500U;
short var_12 = (short)21547;
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
