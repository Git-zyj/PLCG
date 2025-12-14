#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1106059531;
short var_7 = (short)6499;
_Bool var_12 = (_Bool)1;
int var_17 = 770719207;
signed char var_18 = (signed char)24;
int zero = 0;
int var_19 = -1425633189;
int var_20 = -322003810;
void init() {
}

void checksum() {
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
