#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)1;
unsigned long long int var_9 = 11652560219938013788ULL;
signed char var_12 = (signed char)-103;
short var_13 = (short)-14121;
int zero = 0;
short var_18 = (short)-886;
int var_19 = 1572509945;
short var_20 = (short)30442;
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
