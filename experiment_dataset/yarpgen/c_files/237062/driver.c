#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18041;
int var_7 = 1974156897;
signed char var_9 = (signed char)47;
signed char var_11 = (signed char)29;
int zero = 0;
unsigned long long int var_18 = 8958601246213718262ULL;
unsigned long long int var_19 = 11183040965843294386ULL;
unsigned int var_20 = 164526215U;
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
