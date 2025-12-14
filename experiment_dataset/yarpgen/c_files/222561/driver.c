#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1047986105;
long long int var_2 = -8929489538265259006LL;
int var_3 = 1247805085;
signed char var_6 = (signed char)-97;
int var_9 = -2069499687;
int zero = 0;
signed char var_10 = (signed char)-63;
_Bool var_11 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
