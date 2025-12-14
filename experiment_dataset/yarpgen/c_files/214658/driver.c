#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5866515147886904443ULL;
signed char var_3 = (signed char)22;
int var_5 = -1584197386;
int var_9 = 1884427250;
short var_13 = (short)32316;
int zero = 0;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-119;
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
