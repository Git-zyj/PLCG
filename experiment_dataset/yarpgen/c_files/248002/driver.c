#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4112402402U;
int var_2 = -1305247387;
_Bool var_5 = (_Bool)1;
int var_7 = 444400935;
signed char var_8 = (signed char)110;
int var_11 = -505335418;
unsigned long long int var_12 = 18263673984624664366ULL;
int zero = 0;
signed char var_15 = (signed char)-122;
signed char var_16 = (signed char)-93;
signed char var_17 = (signed char)-91;
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
