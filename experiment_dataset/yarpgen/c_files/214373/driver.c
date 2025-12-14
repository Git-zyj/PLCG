#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)19;
_Bool var_6 = (_Bool)1;
signed char var_15 = (signed char)8;
signed char var_18 = (signed char)45;
int zero = 0;
int var_20 = 1645535041;
signed char var_21 = (signed char)-99;
signed char var_22 = (signed char)-49;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
