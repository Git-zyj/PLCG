#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-113;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)28;
_Bool var_12 = (_Bool)1;
unsigned short var_14 = (unsigned short)9387;
int zero = 0;
unsigned long long int var_15 = 9682209364149825471ULL;
unsigned int var_16 = 2080551380U;
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
