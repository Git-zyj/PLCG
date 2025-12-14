#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3528058495233939657LL;
int var_5 = 1160729416;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)1;
int zero = 0;
int var_17 = -605207725;
signed char var_18 = (signed char)-61;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
