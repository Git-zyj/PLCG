#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2601907941U;
unsigned long long int var_7 = 15350928105156281087ULL;
int zero = 0;
short var_10 = (short)31168;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 3480657018579182362ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
