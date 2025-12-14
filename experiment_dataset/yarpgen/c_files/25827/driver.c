#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)-92;
unsigned long long int var_13 = 14031161070553146409ULL;
int var_15 = -559523593;
int var_19 = 1602461821;
int zero = 0;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-105;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
