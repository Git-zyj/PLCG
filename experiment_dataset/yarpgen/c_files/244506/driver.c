#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59226;
unsigned short var_4 = (unsigned short)23069;
unsigned short var_5 = (unsigned short)51039;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned int var_15 = 2899828590U;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-68;
unsigned int var_18 = 1580424089U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
