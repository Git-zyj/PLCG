#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 375048047U;
unsigned int var_4 = 4237040693U;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)1;
_Bool var_9 = (_Bool)1;
unsigned int var_11 = 1578481726U;
_Bool var_12 = (_Bool)1;
unsigned int var_14 = 1451041161U;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 3986751722U;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)1;
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
