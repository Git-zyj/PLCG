#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 9058530322281365389LL;
unsigned int var_7 = 1249912269U;
signed char var_10 = (signed char)-108;
int zero = 0;
_Bool var_11 = (_Bool)1;
int var_12 = 1915178965;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
