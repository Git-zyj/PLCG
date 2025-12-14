#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)234;
_Bool var_5 = (_Bool)1;
signed char var_12 = (signed char)41;
signed char var_13 = (signed char)20;
signed char var_14 = (signed char)84;
unsigned long long int var_15 = 11473836046626309232ULL;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)31;
short var_18 = (short)-28348;
unsigned char var_19 = (unsigned char)149;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
