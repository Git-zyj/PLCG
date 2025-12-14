#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 2033764834228149251ULL;
_Bool var_8 = (_Bool)0;
signed char var_11 = (signed char)66;
signed char var_12 = (signed char)18;
int zero = 0;
int var_15 = -143617528;
unsigned short var_16 = (unsigned short)29961;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
