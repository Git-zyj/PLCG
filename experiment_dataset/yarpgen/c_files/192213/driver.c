#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1093611542;
unsigned long long int var_2 = 4832410164918799907ULL;
short var_14 = (short)20851;
int zero = 0;
signed char var_20 = (signed char)87;
_Bool var_21 = (_Bool)0;
short var_22 = (short)-11460;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
