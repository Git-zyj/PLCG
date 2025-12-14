#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-2;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)144;
signed char var_11 = (signed char)-96;
int zero = 0;
int var_14 = -16220339;
int var_15 = 2112859142;
void init() {
}

void checksum() {
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
