#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)26355;
unsigned char var_2 = (unsigned char)251;
unsigned char var_4 = (unsigned char)187;
unsigned short var_7 = (unsigned short)13025;
unsigned long long int var_8 = 14534120058186178928ULL;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 2556279218U;
signed char var_17 = (signed char)96;
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
