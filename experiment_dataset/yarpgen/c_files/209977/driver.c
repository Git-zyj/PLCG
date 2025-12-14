#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)26455;
long long int var_4 = 7596990154008888941LL;
long long int var_5 = -8346642544483267009LL;
signed char var_6 = (signed char)-92;
unsigned long long int var_9 = 2886715547497019221ULL;
signed char var_10 = (signed char)-43;
int zero = 0;
short var_13 = (short)21995;
unsigned int var_14 = 1375600501U;
short var_15 = (short)-19411;
short var_16 = (short)29793;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
