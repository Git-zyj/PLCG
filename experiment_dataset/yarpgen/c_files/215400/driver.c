#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1954151051;
signed char var_7 = (signed char)-80;
int var_13 = -13270564;
int var_15 = -2145739715;
int zero = 0;
unsigned char var_16 = (unsigned char)90;
signed char var_17 = (signed char)-124;
signed char var_18 = (signed char)77;
unsigned long long int var_19 = 7148847019100534766ULL;
int var_20 = -1875924671;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
