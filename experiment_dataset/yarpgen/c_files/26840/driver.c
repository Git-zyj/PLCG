#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 711827349815463057ULL;
signed char var_4 = (signed char)-88;
_Bool var_6 = (_Bool)1;
short var_11 = (short)9779;
int zero = 0;
signed char var_12 = (signed char)102;
_Bool var_13 = (_Bool)1;
short var_14 = (short)-9348;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
