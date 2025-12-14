#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_2 = 8054160888333469102ULL;
_Bool var_8 = (_Bool)0;
unsigned short var_12 = (unsigned short)41645;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned long long int var_18 = 6205491494370277499ULL;
unsigned long long int var_19 = 16445773317749325292ULL;
unsigned int var_20 = 574199585U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
