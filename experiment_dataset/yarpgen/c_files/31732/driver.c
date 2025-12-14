#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-16586;
_Bool var_1 = (_Bool)0;
signed char var_4 = (signed char)106;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned int var_10 = 2501667917U;
unsigned long long int var_11 = 14182477240394585266ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
