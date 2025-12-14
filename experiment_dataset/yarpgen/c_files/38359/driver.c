#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)9797;
unsigned int var_14 = 2973896798U;
short var_15 = (short)-16713;
int zero = 0;
signed char var_16 = (signed char)-35;
int var_17 = 53638397;
signed char var_18 = (signed char)-44;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
