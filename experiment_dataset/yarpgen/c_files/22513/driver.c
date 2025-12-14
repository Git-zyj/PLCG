#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-5751;
int var_1 = 1848464211;
unsigned short var_3 = (unsigned short)40233;
_Bool var_7 = (_Bool)0;
int zero = 0;
signed char var_11 = (signed char)92;
int var_12 = -63794072;
int var_13 = 46667240;
int var_14 = -959425456;
int var_15 = 823940723;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
