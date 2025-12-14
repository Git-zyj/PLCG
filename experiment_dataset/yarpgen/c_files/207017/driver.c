#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)4793;
unsigned int var_5 = 3928740501U;
unsigned int var_10 = 3853531414U;
int zero = 0;
signed char var_18 = (signed char)10;
unsigned int var_19 = 1613068271U;
unsigned int var_20 = 1275366678U;
void init() {
}

void checksum() {
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
