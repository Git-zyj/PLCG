#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16534184628659702717ULL;
unsigned int var_14 = 1013287602U;
unsigned long long int var_18 = 12849401592689032293ULL;
int zero = 0;
unsigned int var_20 = 1326555691U;
signed char var_21 = (signed char)33;
signed char var_22 = (signed char)123;
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
