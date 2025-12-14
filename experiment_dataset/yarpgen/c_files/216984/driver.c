#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_10 = (signed char)-63;
long long int var_15 = 6210011176449904044LL;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned char var_18 = (unsigned char)166;
long long int var_19 = -2616772058809981300LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
