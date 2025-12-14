#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -8304301540375422325LL;
short var_15 = (short)23424;
int zero = 0;
signed char var_17 = (signed char)120;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)-41;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
