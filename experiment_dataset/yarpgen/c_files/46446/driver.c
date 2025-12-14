#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)232;
long long int var_6 = -8317452616583047726LL;
unsigned int var_8 = 1134442935U;
unsigned int var_12 = 639700820U;
unsigned int var_14 = 3137977149U;
int zero = 0;
unsigned long long int var_18 = 15200429991342030155ULL;
long long int var_19 = -2086903401517789226LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
