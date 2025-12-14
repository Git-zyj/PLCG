#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-92;
signed char var_6 = (signed char)-50;
signed char var_8 = (signed char)5;
signed char var_11 = (signed char)-19;
signed char var_12 = (signed char)47;
int zero = 0;
signed char var_19 = (signed char)59;
signed char var_20 = (signed char)71;
signed char var_21 = (signed char)-99;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
