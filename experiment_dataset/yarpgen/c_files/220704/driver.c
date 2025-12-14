#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 3462152839092896238ULL;
signed char var_7 = (signed char)78;
signed char var_8 = (signed char)10;
signed char var_12 = (signed char)-52;
signed char var_16 = (signed char)103;
int zero = 0;
int var_20 = 1118771125;
unsigned int var_21 = 451250841U;
short var_22 = (short)7119;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
