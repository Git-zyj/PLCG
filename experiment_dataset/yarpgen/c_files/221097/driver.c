#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)29181;
_Bool var_9 = (_Bool)1;
signed char var_12 = (signed char)96;
int var_15 = 1581819461;
int zero = 0;
signed char var_17 = (signed char)26;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)92;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
