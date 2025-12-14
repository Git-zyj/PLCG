#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 2956036659U;
int var_2 = 691076478;
unsigned int var_6 = 2537189639U;
unsigned char var_7 = (unsigned char)173;
unsigned int var_9 = 2949408769U;
long long int var_12 = 6583943414021902178LL;
int zero = 0;
signed char var_13 = (signed char)-104;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
