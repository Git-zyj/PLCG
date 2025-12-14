#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2268478295U;
unsigned char var_9 = (unsigned char)55;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 15826886650849683750ULL;
int zero = 0;
unsigned long long int var_17 = 10436855784970177297ULL;
short var_18 = (short)-17299;
signed char var_19 = (signed char)100;
unsigned int var_20 = 3629955782U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
