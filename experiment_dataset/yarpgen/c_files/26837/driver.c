#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6163622843649996837LL;
_Bool var_2 = (_Bool)0;
unsigned int var_4 = 2010426653U;
unsigned long long int var_7 = 6816848903905493881ULL;
int zero = 0;
signed char var_10 = (signed char)-69;
short var_11 = (short)-222;
short var_12 = (short)-3328;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
