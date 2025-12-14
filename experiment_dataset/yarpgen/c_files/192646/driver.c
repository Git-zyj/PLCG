#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_7 = (_Bool)0;
unsigned char var_11 = (unsigned char)139;
unsigned char var_14 = (unsigned char)227;
short var_15 = (short)-9821;
int zero = 0;
unsigned long long int var_19 = 875537747037941114ULL;
signed char var_20 = (signed char)47;
void init() {
}

void checksum() {
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
