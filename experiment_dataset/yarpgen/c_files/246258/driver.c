#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned long long int var_4 = 6218279448346267944ULL;
long long int var_5 = -7627415012789910563LL;
signed char var_10 = (signed char)-9;
unsigned long long int var_11 = 7757482621780928328ULL;
int zero = 0;
int var_12 = 1428278589;
unsigned long long int var_13 = 18300690484850704941ULL;
_Bool var_14 = (_Bool)1;
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
