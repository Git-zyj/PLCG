#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)173;
signed char var_5 = (signed char)-65;
_Bool var_10 = (_Bool)0;
unsigned int var_14 = 966154915U;
int zero = 0;
unsigned long long int var_17 = 10771545257046671625ULL;
short var_18 = (short)-9306;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
