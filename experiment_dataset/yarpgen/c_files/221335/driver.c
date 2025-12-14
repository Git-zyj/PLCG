#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)26175;
unsigned int var_2 = 354525355U;
unsigned long long int var_4 = 9366513097780757305ULL;
signed char var_5 = (signed char)118;
long long int var_7 = -1612448783780504010LL;
unsigned int var_9 = 4019208036U;
int zero = 0;
unsigned int var_12 = 870325507U;
unsigned int var_13 = 1550499745U;
signed char var_14 = (signed char)73;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
