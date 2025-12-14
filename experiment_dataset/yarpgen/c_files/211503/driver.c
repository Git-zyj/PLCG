#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_10 = (_Bool)0;
short var_12 = (short)-15495;
signed char var_14 = (signed char)26;
int zero = 0;
signed char var_15 = (signed char)-94;
unsigned long long int var_16 = 12856028203704846114ULL;
unsigned long long int var_17 = 74246524037243345ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
