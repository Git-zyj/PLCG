#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)1;
short var_7 = (short)15228;
short var_8 = (short)13606;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 3468186197827975278ULL;
unsigned long long int var_14 = 2801607258267021915ULL;
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
