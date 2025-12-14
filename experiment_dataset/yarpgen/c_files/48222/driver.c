#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-29;
signed char var_2 = (signed char)-127;
long long int var_4 = -3300999977501315836LL;
int var_6 = 975341710;
int var_7 = -1491782697;
int var_8 = 329136360;
unsigned long long int var_9 = 7947260209123951867ULL;
int zero = 0;
int var_11 = 2046344286;
short var_12 = (short)13852;
int var_13 = -887424597;
int var_14 = -2101005417;
int var_15 = 2082074419;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
