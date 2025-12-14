#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)243;
unsigned long long int var_11 = 8793455390180840488ULL;
int zero = 0;
_Bool var_12 = (_Bool)0;
short var_13 = (short)-692;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
