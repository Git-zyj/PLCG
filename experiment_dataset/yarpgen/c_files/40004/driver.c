#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1664923838;
short var_5 = (short)14388;
_Bool var_8 = (_Bool)1;
signed char var_10 = (signed char)-29;
short var_12 = (short)12578;
int zero = 0;
_Bool var_14 = (_Bool)1;
int var_15 = -583912800;
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
