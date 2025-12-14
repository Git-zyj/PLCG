#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_8 = (_Bool)0;
_Bool var_12 = (_Bool)1;
unsigned long long int var_16 = 15963228563974959756ULL;
int zero = 0;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)26976;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
