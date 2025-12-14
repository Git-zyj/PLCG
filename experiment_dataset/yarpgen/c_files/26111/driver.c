#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
unsigned long long int var_6 = 12525645790139995743ULL;
short var_9 = (short)22424;
unsigned char var_10 = (unsigned char)56;
signed char var_11 = (signed char)90;
int zero = 0;
int var_12 = 1013706451;
int var_13 = 2130358812;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
