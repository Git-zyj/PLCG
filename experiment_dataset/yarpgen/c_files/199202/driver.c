#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -294895626024531123LL;
int var_1 = -593853235;
unsigned long long int var_3 = 17356557375516616393ULL;
short var_4 = (short)-6690;
short var_5 = (short)-32694;
short var_6 = (short)-25872;
long long int var_7 = -8990132510685680635LL;
unsigned long long int var_9 = 109514124851550859ULL;
long long int var_10 = -8946185022500477875LL;
int zero = 0;
long long int var_11 = -6749387272896811629LL;
unsigned int var_12 = 3192086081U;
unsigned int var_13 = 3985292505U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
